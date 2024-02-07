#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
#define mypower(x,n) ({int _p=1;for(int _i=0;_i<n;_i++){_p*=x;}_p;})
signed main()
{
    fastio;
    int t;cin >> t;
    while(t--){
        int n,x = 0;cin >> n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
            x ^= arr[i];
        }
        int ans = 0;
        for(int i=0;i<n;i++){
            ans ^= (arr[i]^x);
        }
        if(ans == 0){
            cout << x << endl;
        }
        else
        cout << -1 << endl;
    }
    return 0;
}