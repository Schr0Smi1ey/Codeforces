#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int N = 1e3 + 5;
vector<int> parent(N),Size(N),Rank(N);
int findUPar(int node)
{
    if(node == parent[node])
    return node;
    return parent[node] = findUPar(parent[node]);
}
signed main()
{
    fastio;
    int n;cin >> n;
    vector<pair<int,int>> old;
    vector<int> res;
    for(int i=0;i<n+1;i++) {parent[i] = i,Size[i] = 1;Rank[i] = 0;}
    for(int i=0;i<n-1;i++)
    {
        int u,v;cin >> u >>v;
        int pu = findUPar(u),pv = findUPar(v);
        if(pu == pv)
        {
            old.push_back({u,v});
        }
        else
        parent[pu] = pv;
    }
    for(int i=1;i<=n;i++)
    {
        if(findUPar(i) == i)
        {
            res.push_back(i); 
        }
    }
    cout << old.size() << endl;
    for(int i=0;i<old.size();i++)
    {
        cout << old[i].first << " " << old[i].second << " " << res[i] << " " << res[i+1] << endl;
    }
    return 0;
}
