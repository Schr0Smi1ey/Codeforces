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
    char str[1002][1002];
    for(int i = 0;i < n;i++) {
        for(int j = 0;j < n;j++) {
            cin >> str[i][j];
        }
    }
    vector<int> ans(n);
    for(int i = 0;i < n;i++) {
        ans[i] = i;
    }
    sort(ans.begin(), ans.end(), [&](int a, int b) {
        if(a > b) {
            return str[a][b] == '0';
        }
        return str[a][b] == '1'; 
    });
    for(auto x : ans) {
        cout << x + 1 << " ";
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
    char str[n][n];
    for(int i = 0;i < n;i++) {
        for(int j = 0;j < n;j++) {
            cin >> str[i][j];
        }
    }
    vector<int> v(n);
    for (int i = 0;i < n;i++) {
        v[i] = i;
    }
    for (int i = 0; i < n ; i++) {
        for (int j = 0; j < n - 1; j++) {
            int a = v[j], b = v[j + 1];
            bool flag;
            if (a < b) {
                flag = (str[a][b] == '0');
            } else {
                flag = (str[a][b] == '1');
            }
            if (flag) {
                swap(v[j], v[j + 1]);
            }
        }
    }
    for (int i = 0;i < n;i++) {
        cout << v[i] + 1 << " ";
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