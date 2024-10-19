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
    char str[n][m];
    for (int i = 0;i < n; i++) {
        for (int j = 0;j < m; j++) {
            cin >> str[i][j];
        }
    }
    for (int i = 0;i < n; i++) {
        for (int j = 0; j < m; j++) {
            if(str[i][j] == '#') {
                int x = i + 1, y = j + 1, k = i, cnt = 0;
                while(i < n && str[i][j] == '#') {
                    i++;
                    cnt++;
                }
                cout << x + (cnt / 2) << " " << y << endl;
                return;
            }
        }
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
