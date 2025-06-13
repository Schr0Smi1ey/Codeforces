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
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int x2 = ((2 * arr[0]) - arr[1]) / (n + 1);
    int x1 = (arr[0] - n * x2);
    if((2 * arr[0] - arr[1]) % (n + 1) != 0 || x1 < 0 || x2 < 0) {
        cout << "NO" << endl;
        return;
    }
    for(int i = 0; i < n; i++) {
        if(arr[i] - (x1 * (i + 1)) - (x2 * (n - i)) != 0) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int32_t main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solution();
    return 0;
}