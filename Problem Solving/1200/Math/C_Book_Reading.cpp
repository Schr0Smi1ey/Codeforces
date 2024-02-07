#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
#define mypower(x,n) ({int _p=1;for(int _i=0;_i<n;_i++){_p*=x;}_p;})
void solution(){
    int n,m;cin >> n >> m;
    int x = -1;
    if(n > (10 * m)){
        x = (n /(m * 10));
    }
    int p = n % (10*m);
    int sum = 0,sum1 = 0,temp = 1;
    while(true){       /// A cycle repeats after 10
        if(temp > 10 || temp*m > n)
        break;
        int add = ((temp)*m)%10;
        if(temp * m <= p){
            sum1 += add;
        }
        sum += add;
        temp++;
    }
    if(x > 0){
        sum *= x;
        sum += sum1;
    }  
    cout << sum << endl;
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