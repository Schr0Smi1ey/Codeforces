#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
signed main()
{
    fastio;
    int n;cin >> n;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++)
    {
        int a,b;cin >> a >> b;
        v[i] = {a,b};
    }
    sort(v.begin(),v.end());
    int ans = -1;
    for(int i=0;i<n;i++)
    {
        if(ans <= v[i].second)
        {
            ans = v[i].second;
        }
        else
        ans = v[i].first;
    }
    cout << ans << endl;
    return 0;
}