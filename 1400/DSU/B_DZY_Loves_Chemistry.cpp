#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int N = 1e5 + 5;
vector<int> parent,Size;
int mx = 0;
int findUPar(int node)
{
    if(node == parent[node])
    return node;
    return parent[node] = findUPar(parent[node]);
}
signed main()
{
    fastio;
    int n,e;cin >> n >> e;
    Size.resize(n+1,1);
    parent.resize(n+1);
    for(int i=0;i<=n;i++)
    parent[i] = i;
    int cmp = n;
    while(e--)
    {
        int u,v;cin >> u >> v;
        int pu = findUPar(u),pv = findUPar(v);
        parent[pu] = pv;
        if(pu != pv)
        cmp--; 
    }
    cout << (1LL << (n-cmp)); // just got error for not using the LL with 1
    return 0;
}
