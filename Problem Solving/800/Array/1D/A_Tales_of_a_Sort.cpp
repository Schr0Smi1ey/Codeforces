#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution()
{
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
    }
    vector<int> s(v);
    sort(s.begin(),s.end());
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        if(v[i] != s[i])
        {
            ans = max(ans, v[i]);
        }
    }
    cout << ans << endl;
}
signed main()
{
    fastio;
    int t; cin >> t;
    while(t--)
    {
        solution();
    }
    return 0;
}