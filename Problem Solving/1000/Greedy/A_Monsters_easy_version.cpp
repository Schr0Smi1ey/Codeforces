#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define endl "\n"
#define int long long int

void solution() {
    int n, k;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    int b[n];
    b[0] = 1;
    for (int i = 1; i < n; i++)
        b[i] = min(b[i - 1] + 1, arr[i]);
    int ans = 0;
    for (int i = 0; i < n; i++)
        ans += arr[i] - b[i];
    cout << ans << endl;
}

signed main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        solution();
    }
    return 0;
}
