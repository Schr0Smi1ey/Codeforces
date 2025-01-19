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
    vector<vector<int>> arr(n, vector<int>(m));
    for(int i = 0;i < n;i++) {
        for(int j = 0;j < m;j++) {
            cin >> arr[i][j];
        }
        sort(arr[i].begin(), arr[i].end());
    }
    
    int st = 0;
    vector<int> ans;
    for(int i = 0;i < n;i++) {
        bool flag = true;
        for(int j = 0;j < n;j++) {
            if(arr[j][0] == i) {
                ans.push_back(j + 1);
                flag = false;
                break;
            }
        }
        if(flag) {
            cout << -1 << endl;
            return;
        }
    }
    int k = 1;
    for (int i = 1; i < m;i++) {
        for(int j = 0;j < n - 1;j++) {
            if(arr[ans[j] - 1][i] > arr[ans[j + 1] - 1][i]) {
                cout << -1 << endl;
                return;
            }
        }
    }
    for (auto x : ans) {
        cout << x << " ";
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
