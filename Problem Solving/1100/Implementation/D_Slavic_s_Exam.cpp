#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int
#define trace(x) cout << #x << " : " << x << endl;
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 + 5;

void solution() {
    string s, t;cin >> s >> t;
    int n = s.size(), m = t.size();
    if(n < m) {
        cout << "NO" << endl;
        return;
    }
    int i = 0, j = 0;
    while(i < n && j < m) {
        if(s[i] == t[j] || s[i] == '?') {
            s[i] = t[j];
            j++;
        }
        i++;
    }
    for(int i = 0; i < n; i++) {
        if(s[i] == '?') {
            s[i] = 'a';
        }
    }
    if(j == m) {
        cout << "YES" << endl << s << endl;
    }
    else {
        cout << "NO" << endl;
    }
}

int32_t main() {
    fastio;
    int t = 1;
    cin >> t;
    while(t--) {
        solution();
    }
    return 0;
}
