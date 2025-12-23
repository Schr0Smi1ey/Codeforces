#include <bits/stdc++.h>
using namespace std;
#ifndef ONLINE_JUDGE
// #include "debug_template.hpp" 
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

int cal(vector<int> v) {
    int sum = 0;
    for(int i = 1; i < v.size(); i++) {
        sum += llabs(v[i] - v[i - 1]);
    }
    return sum;
}

void solution() {
    int n; cin >> n;
    vector<int> arr(n);
    for(auto &i : arr) cin >> i;
    int ans = cal(arr);
    int sum = ans;
    ans = min(ans, sum - llabs(arr[1] - arr[0]));
    ans = min(ans, sum - llabs(arr[n - 1] - arr[n - 2]));
    for(int i = 1; i < n - 1; i++) {
        int x = llabs(arr[i] - arr[i - 1]) + llabs(arr[i] - arr[i + 1]);
        int y = llabs(arr[i - 1] - arr[i + 1]);
        ans = min(ans, sum - x + y);
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