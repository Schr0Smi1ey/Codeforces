#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
#define mypower(x,n) ({int _p=1;for(int _i=0;_i<n;_i++){_p*=x;}_p;})
void solution(int n){
    int low = 1,high = n,ansx,ansy,ansz,x,y,z;
    while(low <= high){
        int mid = low + (high - low)/2;
        x = n - mid;
        y = x/2;
        z = x - y;
        if(y == z){
            if(y>=2) {y--;z++;}
        }
        if(mid > z && z > y){
            ansx = mid;
            ansz = z;ansy = y;
            high = mid-1;
        }
        else{
            low = mid + 1;
        }
    }
    cout << ansz << " " << ansx << " " << ansy << endl;
}
signed main()
{
    fastio;
    int t;cin >> t;
    while(t--){
        int n;cin >> n;
        solution(n);
    }
    return 0;
}