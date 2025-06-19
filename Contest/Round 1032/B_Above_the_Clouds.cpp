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
    string str; cin >> str;
    set<char> st;
    st.insert(str.back());
    st.insert(str.front());
    for(int i = 1; i < (long long)(str.size() - 1); i++) {
        if(st.find(str[i]) != st.end()) {
            cout << "Yes" << endl;
            return;
        }
        st.insert(str[i]);
    }
    cout << "No" << endl;
}

int32_t main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solution();
    return 0;
}