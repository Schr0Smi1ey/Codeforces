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
        int n;cin >> n;
        int temp = 1;
        while(true){
            if((temp << 1) > n){
                break;
            }
            temp <<= 1;
        }
        cout << temp - 1 << endl;
    }
    return 0;
}