#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
vector<pair<int,int>> v;
int n,m;
bool judge(int x,int y)
{
    for(int i=1;i<m;i++)
    {
        if(x != v[i].first && x != v[i].second && y != v[i].first && y != v[i].second)
        {
            if(y == -1)
            {
                return (judge(x,v[i].first) || judge(x,v[i].second));
            }
            else
            return false;
        }
    }
    return true;
}
signed main()
{
    fastio;
    cin >> n >> m;
    v = vector<pair<int,int>> (m);
    for(int i=0,u,x;i<m;i++)
    {
        cin >> u >> x;
        v[i] = {u,x};
    }
    if(judge(v[0].first,-1) || judge(v[0].second,-1))
    {
        cout << "YES" ;
    }
    else
    cout << "NO" ;
    return 0;
}