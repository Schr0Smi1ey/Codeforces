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
    int n, s; cin >> n >> s;
    int arr[n], brr[n + 1] = {0};
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(i)
            brr[i] += brr[i - 1] + (arr[i] - arr[i - 1]);
    }
    debugArr(brr, n);
    int ans1 = 0, ans2 = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] >= s || i == n - 1) {
            ans1 = brr[n - 1] + brr[max(0LL, i - 1)] + abs(arr[max(0LL, i - 1)] - s);
            ans2 = brr[n - 1] + abs(arr[i] - s) + (brr[n - 1] - brr[i]);
            break;
        }
    }
    cout << min(ans1, ans2) << endl;
}

int32_t main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solution();
    return 0;
}