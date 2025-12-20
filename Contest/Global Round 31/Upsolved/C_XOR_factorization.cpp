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
    int n, k; cin >> n >> k;
    if(k % 2 == 0) {
        vector<int> ans(k, 0);
        int p = 0;
        for(int i = 30; i >= 0; i--) {
            if((1 << i) & n) {
                for(int j = 0; j < k; j++) {
                    if(j == min(p, k - 1)) continue;
                    ans[j] += (1 << i);
                }
                if(p < k)
                    p++;
            }
            else {
                for(int j = 0; j < (p / 2) * 2; j++) {
                    ans[j] += (1 << i);
                }
            }
        }
        for(int i = 0; i < k; i++) {
            cout << ans[i] << " ";
        }
    }
    else {
        for(int i = 0; i < k; i++) {
            cout << n << " ";
        }
    }
    cout << endl;
}

int32_t main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solution();
    return 0;
}