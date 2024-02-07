#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int N = 1e5 + 5;
vector<int> adj[N];
int cost[N],total,n,m,minima;
bool visited[N];
int dfs(int src)
{
    visited[src] = true;
    minima = min(minima,cost[src]);

    for(auto x : adj[src])
    {
        if(!visited[x])
        {
            dfs(x);
        }
    }
    return minima;
}
signed main()
{
    fastio;
    cin >> n >> m;
    for(int i=1;i<=n;i++)
    {
        cin >> cost[i];
    }
    while(m--)
    {
        int u,v;cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=1;i<=n;i++)
    {
        if(!visited[i])
        {
            minima = INT_MAX;
            total += dfs(i);
        }
    }
    cout << total ;
    return 0;
}