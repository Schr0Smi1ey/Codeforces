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

int mex(const set<int>& a) {
    int n = a.size();
    vector<bool> present(n + 1, false);

    for (int x : a) {
        if (x >= 0 && x <= n) {
            present[x] = true;
        }
    }

    for (int i = 0; i <= n; i++) {
        if (!present[i]) return i;
    }

    return n + 1;
}


void solution() {
    int n, k; cin >> n >> k;
    vector<int> v(n);
    set<int> st;
    for(int i = 0;i < n;i++) {
        cin >> v[i];
        st.insert(v[i]);
    }
    if(st.size() > k - 1) {
        while (st.size() > k - 1) {
            st.erase(prev(st.end())); 
        }
    }
    cout << mex(st) << endl;
}

int32_t main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solution();
    return 0;
}