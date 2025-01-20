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
    int arr[n];
    
    for(int i = 0;i < n;i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    vector<int> v;
    map<int, int> mp;
    for(int i = 0;i < n;i++) {
        mp[arr[i]]++;
        if(mp[arr[i]] == 2) {
            v.push_back(arr[i]);
        }
    }
    if(v.size() == 0) {
        cout << -1 << endl;
        return;
    }
    if(v.size() > 1) {
        cout << v[0] << " " << v[0] << " " << v[1] << " " << v[1] << endl;
        return;
    }
    vector<int> remain;
    int cnt = 2;
    for(auto x : arr) {
        if(x == v[0] && cnt > 0) {
            cnt--;
            continue;
        }
        remain.push_back(x);
    }
    for (int i = 0;i < remain.size() -1 ;i++) {
        if(remain[i + 1] < remain[i] + 2 * v[0]) {
            cout << v[0] << " " << v[0] << " " << remain[i] << " " << remain[i + 1] << endl;
            return;
        }
    }
    cout << -1 << endl;
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