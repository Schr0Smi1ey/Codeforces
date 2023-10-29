#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
#define mypower(x,n) ({int _p=1;for(int _i=0;_i<n;_i++){_p*=x;}_p;})
void solution(){
    int l,r,x,a,b;cin >> l >> r >> x >> a >> b;
    if(a == b){
        cout << 0 << endl;
    }
    else{
        if (abs(a - b) >= x){
            cout << 1 << endl;
        }
        else if((abs(a-l) >= x && abs(b-l) >= x) || (abs(a-r) >= x && abs(b-r) >= x)){
            cout << 2 << endl;
        }
        else if((abs(a-l) >= x && abs(l-r) >= x && abs(b-r) >= x) || (abs(r-a) >= x && abs(l - r) >= x && abs(l-b) >= x)){
            cout << 3 << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
}
signed main()
{
    fastio;
    int t;cin >> t;
    while(t--){
        solution();
    }
    return 0;
}