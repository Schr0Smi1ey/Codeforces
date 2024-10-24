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
    for(int i = 0;i < n; i++) {
        cin >> arr[i];
    }
    int l = 1, r = n - 2;
    while(l < r) {
        if((arr[l] == arr[l - 1] || arr[r] == arr[r + 1]) && arr[l] != arr[r]) {
            swap(arr[l], arr[r]);
        }
        l++;
        r--;
    }
    int ans = 0;
    for (int i = 1;i < n; i++) {
        ans += (arr[i] == arr[i - 1]);
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
