#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
signed main()
{
    fastio;
    int n,l; cin >> n >> l;
    double arr[n];
    for(int i=0;i<=n;i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    double ans = 0;
    for(int i=1;i<n;i++)
    {
        ans = max(ans,arr[i]-arr[i-1]);
    }
    ans = max(ans/2,max(arr[0] - 0,l - arr[n-1]));
    cout << fixed << setprecision(10) << ans << endl;
    return 0;
}