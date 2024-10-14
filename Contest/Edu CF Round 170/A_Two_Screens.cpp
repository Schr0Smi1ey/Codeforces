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
    string a,b;cin >> a >> b;
    int n = a.size(), m = b.size(), cnt = 0;
    for (int i = 0; i < min(n,m); i++) {
        if(a[i] == b[i]) {
            cnt++;
        } 
        else {
            break;
        }
    }
    cout << n + (m - cnt + (cnt != 0)) << endl;
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
