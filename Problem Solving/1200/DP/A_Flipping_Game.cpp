#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
signed main()
{
    fastio;
    int n;cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    if(n == 1){
        arr[0] == 1?cout << 0 :cout << 1;
        return 0;
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int temp = 0;
            for(int k=0;k<n;k++){
                if(k>=i && k<=j){
                    arr[k] == 0?temp++:temp+=0;
                    continue;
                }
                arr[k] == 1?temp++:temp+=0;
            }
            ans = max(ans,temp);
        }
    }
    cout << ans << endl;
    return 0;
}