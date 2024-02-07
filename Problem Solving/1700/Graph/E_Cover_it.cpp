#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
#define INF INT_MAX
signed main()
{
    fastio;
    int t;cin >> t;
    while(t--)
    {
        // Reading the Graph 
        int n,m;
        cin >> n >> m;
        vector<vector<int>> adj(n+1);
        vector<int> dis(n+1,INF);
        for(int i=0;i<m;i++)
        {
            int u,v;cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // BFS
        queue<int> q;
        q.push(1);
        dis = vector<int> (n+1,INT_MAX);
        dis[1] = 1;
        while(!q.empty())
        {
            int current = q.front();
            q.pop();
            for(auto x : adj[current])
            {
                if(dis[x] == INT_MAX)
                {
                    q.push(x);
                    dis[x] = dis[current] + 1;
                }
            }
        }
        // Selecting the Node
        vector<int> even,odd;
        for(int i=1;i<=n;i++)
        {
            if(dis[i]&1) odd.push_back(i);
            else even.push_back(i);
        }
        if(even.size() < odd.size())
        {
            cout << even.size() << endl;
            for(auto x : even) cout << x << " ";
        }
        else
        {
            cout << odd.size() << endl;
            for(auto x : odd) cout << x << " ";
        }
        cout << endl;
    }
}