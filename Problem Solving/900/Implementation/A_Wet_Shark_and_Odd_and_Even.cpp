#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
signed main()
{
    fastio;
    int n,x;cin >> n;
    vector<int> odd,even;
    int ans = 0,temp = INT_MAX;
    for(int i=0;i<n;i++){
        cin >> x;
        ans += x;
        if(x % 2 != 0){
            temp = min(temp,x);
        }
    }
    if(ans % 2 != 0){
        cout << ans - temp;
    }
    else{
        cout << ans;
    }
    return 0;
}