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

int calc(int a, int b) {
    int x = 1, y = 2;
    int cnt = 0;
    if(a > 0) {
        cnt++; a -= x;
    }
    if(b > 1) {
        cnt++; b -= y;
    }
    while(true) {
        x *= 4; a -= x; cnt += (a >= 0);
        if(a < 0) break;
        y *= 4; b -= y; cnt += (b >= 0);
        if(b < 0) break;
    }
    return cnt;
}
void solution() {
    int a, b; cin >> a >> b;
    cout << max(calc(a,b), calc(b,a)) << endl;
}

int32_t main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solution();
    return 0;
}