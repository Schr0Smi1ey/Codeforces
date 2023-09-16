#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int N = 2e5 + 5;
int n,e;
set<int> node;
vector<int> adj[N];
bool visited[N],flag,ind;
void read_graph()
{
    cin >> n >> e;
    while(e--)
    {
        int u,v;cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}
void hasCycle(int src)
{
    visited[src] = true;
    node.insert(src);
    for(auto v : adj[src])
    {
        if(!visited[v])
        {
            hasCycle(v);
        }
    }
}
signed main()
{
    fastio;
    read_graph();
    int cnt = 0;
    for(int i=1;i<=n;i++)
    {
        node.clear();
        if(!visited[i])
        {
            hasCycle(i);
            bool flag = true;
            for(auto v : node)
            {
                flag &= (adj[v].size() == 2);
            }
            if(flag)
            cnt++;
        }
    }
    cout << cnt ;
    return 0;
}