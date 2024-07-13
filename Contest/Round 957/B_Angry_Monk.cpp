// Upsolved

#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 + 5;

void solution() {
    int n,k;cin >> n >> k;
    int arr[k];
    for(int i = 0;i < k;i++){
        cin >> arr[i];
    }
    sort(arr,arr + k);
    int ans = 0;
    for(int i = 0;i < k - 1;i++){
        ans += (arr[i]-1) + arr[i];
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
