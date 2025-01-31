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
    int n;
    cin >> n;
    vector<int> test(n);
    for(int i = 0;i < n;i++) {
        cin >> test[i];
    }
    for (int i = 1;i < n;i++)  {
        int x = min(test[i], test[i - 1]);
        test[i] -= x;
        test[i - 1] -= x;
    }
    cout << (is_sorted(test.begin(),test.end()) ? "YES" : "NO") << endl;
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
