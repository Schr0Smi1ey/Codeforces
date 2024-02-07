#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
signed main()
{
    fastio;
    int t;cin >> t;
    while(t--)
    {
        int l,r;cin >> l >> r;
        if(r < 2*l)
        cout << -1 << " " << -1 << endl;
        else
        cout << l << " " << 2*l << endl;
    }
    return 0;
}