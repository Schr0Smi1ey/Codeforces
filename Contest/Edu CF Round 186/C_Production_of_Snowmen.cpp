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
    int n; cin >> n;
    vector<int> a(n), b(n), c(n);
    for(auto &i : a) cin >> i;
    for(auto &i : b) cin >> i;
    for(auto &i : c) cin >> i;
    int va = 0;
    for(int d = 0; d < n; d++) {
        bool ok = true;
        for(int i = 0; i < n; i++) {
            ok &= (a[(i + d) % n] < b[i]);
            if(!ok) break;
        }
        if(ok) va++;
    }
    int vb = 0;
    for(int d = 0; d < n; d++) {
        bool ok = true;
        for(int i = 0; i < n; i++) {
            ok &= (c[(i + d) % n] > b[i]);
            if(!ok) break;
        }
        if(ok) vb++;
    }


    cout << 1LL * n * va * vb << endl;

}

int32_t main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solution();
    return 0;
}