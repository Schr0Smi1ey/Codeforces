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
    set<int> st, nst;
    nst.insert(arr[0]);
    st = nst;
    int ans = 1;
    for(int i = 1; i < n; i++) {
        if(st.find(arr[i]) != st.end()) {
            st.erase(arr[i]);
        }
        nst.insert(arr[i]);
        if(st.empty()) {
            ans++;
            st = nst;
            nst.clear();
        }
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