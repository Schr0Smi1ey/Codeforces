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
    int n, k; cin >> n >> k;
    int arr[n];
    int fre[64] = {0};
    int ans = 0;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        bitset<64> bs(arr[i]);
        for(int i = 0; i < 64; i++) {
            fre[i] += (bs[i] == 0);
        }
        ans += __builtin_popcountll(arr[i]);
    }
    for(int i = 0; i < 61; i++) {
        int total = (1LL << i) * fre[i];
        if(total < 0) // Note
            break;
        if(k >= total) {
            ans += fre[i];
            k -= total;
        }
        else if(k > 0){
            int can = (k / (1LL << i));
            ans += can;
            k -= (can * (1LL << i));
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