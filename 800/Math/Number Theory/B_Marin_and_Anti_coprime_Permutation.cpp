#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
#define HERE
#define debug(args...)
const int mod = 998244353;
int ans(int n){
    int result = 1;
    for(int i = 1;i<=n;i++){
        result = (result*i) % mod;
    }
    return (result*result) % mod;
}
void solution() {
    int n;
    cin >> n;
    if (n & 1) {
        cout << 0 << endl;
    } else {
        cout << ans(n/2) << endl;
    }
}

int32_t main() {
    int t = 1;
    cin >> t;
    while (t--) {
        solution();
    }
    return 0;
}
