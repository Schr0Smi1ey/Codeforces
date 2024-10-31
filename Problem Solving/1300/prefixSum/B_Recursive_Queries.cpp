#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int
#define trace(x) cout << #x << " : " << x << endl;
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 1e6 + 5;

int arr[N][10];

int f(int n) {
    if(n < 10)
        return n;
    int ans = 1;
    while(n) {
        if(n % 10)
            ans *= (n % 10);
        n /= 10;
    }
    return f(ans);
}
void preCompute() {
    for (int i = 1; i < N; i++) {
        if(f(i) < 10) {
            arr[i][f(i)]++;
        }
    }
    for (int i = 1; i < 10; i++) {
        for (int j = 1; j < N; j++) {
            arr[j][i] += arr[j - 1][i];
        }
    }
    
}
void solution() {
    int l, r, k;cin >> l >> r >> k;
    cout << arr[r][k] - arr[l - 1][k] << endl;
}

int32_t main() {
    fastio;
    preCompute();
    int t = 1;
    cin >> t;
    while(t--) {
        solution();
    }
    return 0;
}
