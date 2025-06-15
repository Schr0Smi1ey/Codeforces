#include <bits/stdc++.h>
using namespace std;
#ifndef ONLINE_JUDGE
#include "debug_template.hpp" 
#else
#define debug(...)
#define debugArr(arr, N)
#define trace(x)
#endif
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl "\n"
#define int long long int
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 + 5;

void solution() {
    int k, a, b, x, y;
    cin >> k >> a >> b >> x >> y;
    int ans = 0;
    if(x < y) {
        if(k >= a) {
            ans += ((k - a + 1) / x);
            if((k - a + 1) % x > 0)
                ans++;
            k -= ans * x;
        }
        if(k >= b) {
            ans += ((k - b + 1) / y);
            if((k - b + 1) % y > 0)
                ans++;
        }
    }
    else {
        if(k >= b) {
            ans += ((k - b + 1) / y);
            if((k - b + 1) % y > 0)
                ans++;
            k -= ans * y;
        }
        if(k >= a) {
            ans += ((k - a + 1) / x);
            if((k - a + 1) % x > 0)
                ans++;
        }
    }
    cout << ans << endl;
}

int32_t main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solution();
    return 0;
}