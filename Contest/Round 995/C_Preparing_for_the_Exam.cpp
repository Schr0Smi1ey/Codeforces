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
    int n, m, k;
    cin >> n >> m >> k;
    int arr[n];
    map<int, int> mp;
    for (int i = 0; i < m;i++) {
        cin >> arr[i];
    }
    for (int i = 0, x; i < k; i++) {
        cin >> x;
        mp[x]++;
    }
    for (int i = 0; i < m; i++) {
        int total = n;
        total -= (mp.count(arr[i]) == 0);
        cout << (total == k);
    }
    cout << endl;
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
