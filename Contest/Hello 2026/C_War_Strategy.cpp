#include <bits/stdc++.h>
using namespace std;
#ifndef ONLINE_JUDGE
//#include "debug_template.hpp" 
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
    int n, m, k;
    cin >> n >> m >> k;
    int mLeft = k - 1, mRight = n - k, ans = 1; 

    for (int l = 1; l <= n ; l++) {
        int cost = 2 * l - 1;
        if (cost > m) break;
        int rem = m - cost;   

        if (l <= mLeft) {
            int r = min({l, mRight, rem});
            ans = max(ans, l + r + 1);
        }

        if (l <= mRight) {
            int r = min({l, mLeft, rem});
            ans = max(ans, l + r + 1);
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