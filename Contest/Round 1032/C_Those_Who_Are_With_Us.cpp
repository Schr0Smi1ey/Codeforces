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
    int n, m; cin >> n >> m;
    int arr[n][m];
    set<int> st;
    int row[n] = {0}, col[m] = {0};
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
            st.insert(arr[i][j]);
        }
    }
    auto it = st.rbegin();
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        int temp = 0;
        for(int j = 0; j < m; j++) {
            if(arr[i][j] == *it) {
                temp++;
                cnt++;
            }
        }
        row[i] = temp;
    }
    for(int i = 0; i < m; i++) {
        int temp = 0;
        for(int j = 0; j < n; j++) {
            if(arr[j][i] == *it) {
                temp++;
            }
        }
        col[i] = temp;
    }
    bool flag = false;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if((row[i] + col[j] - (arr[i][j] == *it)) == cnt ) {
                flag = true;
            }
        }
    }
    if(flag) {
        cout << *it - 1 << endl;
    }
    else {
        cout << *it << endl;
    }
}

int32_t main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solution();
    return 0;
}