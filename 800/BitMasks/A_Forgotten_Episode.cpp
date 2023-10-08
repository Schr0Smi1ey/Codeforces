#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
signed main()
{
    fastio;
    int n,x,ans = 0;cin >> n;
    for(int i=1;i<=n-1;i++){
        cin >> x;
        ans ^= x;ans ^= i;
    }
    cout << (ans^n);
    return 0;
}