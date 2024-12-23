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
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int ans = (n / (a + b + c));
    if(n % (a + b + c) == 0) {
        cout << ans*3 << endl;
    }
    else {
        int have = ans * (a + b + c);
        if(have + a >= n) {
            cout << ans*3 + 1 << endl;
            return;
        }
        if(have + a + b >= n) {
            cout << ans*3 + 2 << endl;
            return;
        }
        cout << ans*3 + 3 << endl;
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
