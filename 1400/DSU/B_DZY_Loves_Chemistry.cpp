#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int N = 55;
vector<int> Size, parent;
int danger = 1;
int findUPar(int node)
{
    if (parent[node] == node)
        return node;
    return parent[node] = findUPar(parent[node]);
}
signed main()
{
    fastio;
    int n, e; cin >> n >> e;
    Size.resize(n + 1, 2);
    parent.resize(n + 1);
    for (int i = 0; i <= n; i++)
    {
        parent[i] = i;
    }
    while (e--)
    {
        int u, v; cin >> u >> v;
        int pu = findUPar(u),pv = findUPar(v);
        if(pu != pv)
        {
            danger *= 2; // if reaction is possible multiply the danger by two
            parent[pu] = pv;
        }
    }
    cout << danger ;
    return 0;
}