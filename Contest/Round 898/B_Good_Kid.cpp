#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
void solution()
{
    int n;cin >> n;
    int arr[n];for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int ans = INT_MIN;
    for(int i=0;i<n;i++){
        int temp = 1;
        for(int j=0;j<n;j++){
            temp *= (i==j)?(arr[j] + 1):arr[j];
        }
        ans = max(ans,temp);
    }
    cout << ans << endl;
}
signed main()
{
    fastio;
    int t;cin >> t;
    while(t--)
    {
        solution();
    }
    return 0;
}