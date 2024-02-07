#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int n,q;cin >> n >> q;
    int arr[n] , sum = 0,even = 0,odd = 0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        sum += arr[i];
        if(arr[i]&1) odd++;
        else even++;
    }
    while(q--){
        int type,x;cin >> type >> x;
        if(type == 0){
            sum = sum + (even * x);
            cout << sum << endl;
                if(x % 2 != 0){
                odd += even;
                even = 0;
            }
        }
        else{
            sum = sum + (odd * x);
            cout << sum << endl;
                if(x & 1){
                even += odd;
                odd = 0;
            }
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