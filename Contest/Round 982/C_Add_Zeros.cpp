#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int
#define trace(x) cout << #x << " : " << x << endl;
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 + 5;

map<pair<int, int>, int> memo;

int search(int n, int index, map<int, vector<int>> &mp, int max_reach) {
    if(memo.find({n, index}) != memo.end()) {
        return memo[{n, index}];
    }
    if(mp.find(n + 1) == mp.end()) {
        return max_reach;
    }
    for(auto x : mp[n + 1]) {
        max_reach = max(max_reach, search(n + x - 1, x, mp, n + x - 1));
    }
    return memo[{n, index}] = max_reach;
}

void solution() {
    int n;
    cin >> n;
    int arr[n + 1];
    map<int, vector<int>> mp;
    memo.clear();

    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
        if(i > 1)
            mp[arr[i] + i].push_back(i);
    }

    int ans = n;
    if(mp.find(n + 1) != mp.end()) {
        for(auto x : mp[n + 1]) {
            int temp = search(n + x - 1, x, mp, n + x - 1);
            ans = max(ans, temp);
        }
    }
    cout << ans << endl;
}

int32_t main() {
    fastio;
    int t;
    cin >> t;
    while(t--) {
        solution();
    }
    return 0;
}
