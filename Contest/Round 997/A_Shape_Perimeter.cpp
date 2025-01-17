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
    int n, m;cin >> n >> m;
    int ans = (m * 4) * n;
    for(int i = 0;i < n;i++) {
        int x,y;cin >> x >> y;
        if(i) {
            x = m - x;
            y = m - y;
            ans -= ((x + y) * 2);
        }
    }
    cout << ans << endl;
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
