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
    string str; cin >> str;
    int cnt = 0, n = str.size();
    cnt += (str[0] != 's');
    cnt += (str[n - 1] != 's');
    str[0] = str[n - 1] = 's';
    for(int i = 1; i < n; i++) {
        if(str[i] == 'u') {
            cnt += (str[i - 1] != 's') + (str[i + 1] != 's');
            str[i - 1] = str[i + 1] = 's';
        }
    }
    cout << cnt << endl;
}

int32_t main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solution();
    return 0;
}