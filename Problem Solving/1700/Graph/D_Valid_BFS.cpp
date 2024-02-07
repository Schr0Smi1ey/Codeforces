#include<bits/stdc++.h>
using namespace std;

// Define constants and global variables
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int N = 2e5 + 5;
int n;
bool visited[N];
vector<int> adj[N];
int relorder[N];
vector<int> ans;

// Custom comparison function for sorting
bool cmp(int a, int b)
{
    return (relorder[a] < relorder[b]);
}

// Function to read the graph
void read_graph()
{
    cin >> n;
    int x = n - 1;
    while (x--)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}

// Breadth-First Search function
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;
    ans.push_back(src);

    while (!q.empty())
    {
        int current = q.front();
        q.pop();

        // Traverse adjacent vertices
        for (auto x : adj[current])
        {
            if (!visited[x])
            {
                q.push(x);
                ans.push_back(x);
                visited[current] = true;
            }
        }
    }
}

// Main function
signed main()
{
    fastio;

    // Read the graph and initialize variables
    read_graph();
    vector<int> path(n);
    
    // Read the path and maintain relative order
    for (int i = 0; i < n; i++)
    {
        cin >> path[i];
        relorder[path[i]] = i;
    }

    // Sort adjacency lists based on relative order
    for (int i = 1; i <= n; i++)
    {
        sort(adj[i].begin(), adj[i].end(), cmp);
    }

    // Perform BFS from vertex 1
    bfs(1);

    // Check if the BFS traversal matches the given path
    for (int i = 0; i < ans.size(); i++)
    {
        if (ans[i] != path[i])
        {
            cout << "No";
            return 0;
        }
    }

    cout << "Yes";
    return 0;
}
