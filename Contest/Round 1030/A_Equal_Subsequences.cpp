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
    string str(k,'1');
    cout << str;
    for(int i = 0; i < (n - k); i++) {
        cout << '0';
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