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
    int n, x, y;
    cin >> n >> x >> y;
    string str; cin >> str;
    int arr[n];
    for(auto &i : arr) cin >> i;
    if(accumulate(arr, arr + n,0LL) > (x + y)) {
        cout << "NO" << endl;
        return;
    }
    if(str == string(n, '0') || str == string(n, '1')) {
        if(str == string(n, '1')) {
            swap(x, y);
        }
        int x_need = 0;
        for(int i = 0; i < n; i++) {
            x_need += (arr[i] / 2) + 1;
        }
        if(x_need > x || (x < y + n)) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
        
        return;
    }
    int x_need = 0, y_need = 0;
    for(int i = 0; i < n; i++) {
        if(str[i] == '0') {
            x_need += (arr[i] / 2) + 1;
        }
        else {
            y_need += (arr[i] / 2) + 1;
        }
    }
    if(x >= x_need && y >= y_need) {
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