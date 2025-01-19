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
    int arr[5];
    for(int i = 0;i < 4;i++) {
        cin >> arr[i];
    }
    arr[4] = arr[3];
    arr[3] = arr[2];
    int ans = 0;
    for (int i = -100; i <= 100;i++) {
        arr[2] = i;
        int temp = 0;
        for (int j = 2;j < 5;j++) {
            temp += (arr[j] == arr[j - 1] + arr[j - 2]);
        }
        ans = max(ans, temp);
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
