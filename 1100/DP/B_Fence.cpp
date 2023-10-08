#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
signed main()
{
    fastio;
    int n,k;cin >> n >> k;
    int arr[n+1];
    arr[0] = 0;
    for(int i=1;i<=n;i++){
        cin >> arr[i];
        arr[i] = arr[i] + arr[i-1];
    }
    int ans = 1,flag = arr[k];
    for(int i=k+1,l=1;i<=n;i++,l++){
        if((arr[i]-arr[l]) < flag){
            flag = arr[i]-arr[l];
            ans = i-k + 1;
        }
    }
    cout << ans << endl;
    return 0;
}