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
    char matrix[n][m];
    bool visited[n][m];
    for(int i = 0;i < n; i++) {
        for(int j = 0;j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    int cnt = 0;
    int till = (min(n, m) / 2);
    for(int i = 0;i < till; i++) { // navigating all starting index
        string temp = "";
        for (int j = i; j < m; j++) { // L ---> R
            temp += matrix[i][j];
        }
        for (int k = i + 1; k < n; k++) { // U ---> D
            temp += matrix[k][m - 1];
        }
        for(int l = m - 2; l >= i; l--) { // R ---> L
            temp += matrix[n - 1][l];
        }
        for(int p = n - 2; p > i; p--) { // D ---> U
            temp += matrix[p][i];
        }
        temp = temp + temp.substr(0, 3);
        for(int x = 0;x < temp.size() - 3; x++) {
            cnt += (temp.substr(x, 4) == "1543");
        }
        temp = "";
        m--;
        n--;
    }
    cout << cnt << endl;
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
