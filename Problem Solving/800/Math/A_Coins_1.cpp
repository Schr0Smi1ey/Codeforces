#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
signed main()
{
    fastio;
    int n, s ;
    cin >> n >> s;
    int ans = s/n;
    if(s%n)
    ans++;
    cout << ans << endl;
    return 0;
}