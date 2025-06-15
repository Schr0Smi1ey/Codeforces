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
    int w,h,a,b, x1,y1,x2,y2;
    cin >> w >> h >> a >> b >> x1 >> y1 >> x2 >> y2;
    bool x = ((x2 - x1) && (x2 - x1) % a == 0);
    bool y = ((y2 - y1) && (y2 - y1) % b == 0);
    if(x || y) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}

int32_t main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solution();
    return 0;
}