#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int

void solution() {
    int n, m; 
    cin >> n >> m;
    string str[n];
    for(int i = 0; i < n; i++) {
        cin >> str[i];
    }
    int ans = INT_MAX;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            int diff = 0;
            for(int k = 0; k < m; k++) {
                diff += abs(str[i][k] - str[j][k]);
            }
            ans = min(ans, diff);
        }
    }
    cout << ans << endl;
}

signed main() {
    fastio;
    int t; 
    cin >> t;
    while(t--) {
        solution();
    }
    return 0;
}
