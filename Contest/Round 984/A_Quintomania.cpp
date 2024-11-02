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
    int n;cin >> n;
    bool flag = true;
    int last = 0;
    for(int i = 0,x ;i < n;i++) {
        cin >> x;
        if(i) {
            flag &= (abs(x - last) == 5 || abs(x - last) == 7);
        }
        last = x;
    }
    cout << (flag ? "YES" : "NO") << endl;
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
