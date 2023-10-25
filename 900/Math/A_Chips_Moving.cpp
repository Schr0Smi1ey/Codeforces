#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
#define mypower(x,n) ({int _p=1;for(int _i=0;_i<n;_i++){_p*=x;}_p;})
signed main()
{
    fastio;
    int n;cin >> n;
    int even = 0,odd = 0;
    while(n--){
        int x;cin >> x;
        if(x&1) odd++;
        else even++;
    }
    cout << min(odd,even) << endl;
    return 0;
}