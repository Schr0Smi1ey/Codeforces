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
    int n, k;cin >> n >> k;
    vector<int> arr;
    map<int, int> mp;
    for(int i = 0, x, y;i < k; i++) {
        cin >> x >> y;
        mp[x] = (mp.find(x) != mp.end() ? mp[x] : 0) + y;
    }
    for(auto x : mp) {
        arr.push_back(x.second);
    }
    sort(arr.begin(), arr.end(), greater<int>());
    int ans = 0;
    for (int i = 0; i < min((long long)arr.size(), n); i++) {
        ans += arr[i];
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
