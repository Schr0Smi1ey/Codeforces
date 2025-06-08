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
    int n, x; cin >> n >> x;
    int arr[n], first = -1, last = -1;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] == 1 && first == -1)
            first = i;
    }
    for(int i = n - 1; i >= 0; i--) {
        if(arr[i] == 1 && last == - 1) {
            last = i;
            break;
        }
    }
    if(first == -1 && last == -1) {
        cout << "YES" << endl;
        return;
    }
    if((last - first + 1) <= x) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}

int32_t main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solution();
    return 0;
}