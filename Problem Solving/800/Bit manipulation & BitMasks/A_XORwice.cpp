#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
signed main()
{
    fastio;
    int t;cin >> t;
    while(t--){
        int a,b;cin >> a >> b;
        cout << ((max(a,b))^(min(a,b))) << endl;
    }
    return 0;
}