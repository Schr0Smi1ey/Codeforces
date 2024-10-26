#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int
#define trace(x) cout << #x << " : " << x << endl;
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 + 5;

int arr[N][32];
void preCalc() {
    for(int i = 1; i <= N; i++) {
        bitset<32> b(i);
        for(int k = 0, j = 31;k < 32 && j >= 0; k++, j--) {
            arr[i][j] = (b[k] == 0);
        }
    }
    for(int i = 1;i <= N;i++) {
        for(int j = 0;j < 32; j++) {
            arr[i][j] += arr[i - 1][j];
        }
    }
}
void solution() {
    
    int l,r;cin >> l >> r;
    int ans = INF;
    for (int i = 0; i < 32; i++) {
        ans = min(ans, arr[r][i] - arr[l - 1][i]);
    }
    cout << ans << endl;
}

int32_t main() {
    fastio;
    preCalc();
    int t = 1;
    cin >> t;
    while(t--) {
        solution();
    }
    return 0;
}
