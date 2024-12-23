#include <bits/stdc++.h>
using namespace std;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define endl "\n"
#define int long long int
#define trace(x) cout << #x << " : " << x << endl;
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 + 5;

void solution()
{
    int n, x, y;
    cin >> n >> x >> y;
    int arr[n], tot = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        tot += arr[i];
    }
    sort(arr, arr + n);
    int ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int remain = tot - arr[i];
        int low = max(remain - y, arr[i + 1]), high = remain - x;
        if (high < arr[i] || low < arr[i])
            continue;
        int index1 = lower_bound(arr + i + 1, arr + n, low) - arr;
        int index2 = upper_bound(arr + i + 1, arr + n, high) - arr;
        ans += (index2 - index1);
    }
    cout << ans << endl;
}

int32_t main()
{
    fastio;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solution();
    }
    return 0;
}
