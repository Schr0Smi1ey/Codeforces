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
    int arr[n];
    map<int,int> mp;
    for(int i = 0;i < n;i++) {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    sort(arr, arr + n);
    int ans = 0;
    for(int i = 0;i < n;i++) {
        if(arr[i] >= k)
            break;
        if(mp.find(arr[i]) == mp.end())
            continue;
        int left = k - arr[i];
        if(mp.find(left) != mp.end()) {
            if(left == arr[i]) {
                if(mp[left] > 1) {
                    ans++;
                    mp[left] -= 2;
                    if(mp[left] == 0)
                        mp.erase(left);
                }
            }
            else if (mp[left] > 0) {
                ans++;
                mp[left] -= 1;
                if (mp[left] == 0)
                    mp.erase(left);
                mp[arr[i]] -= 1;
                if(mp[arr[i]] == 0) {
                    mp.erase(arr[i]);
                }
            }
        }
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
