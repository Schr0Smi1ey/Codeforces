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
    int arr[n];
    int gcd = 0;
    for(int i=0;i<n;i++){
        int x;cin >> x;
        gcd = __gcd(gcd,x);
    }
    /*
        When the GCD of two numbers is, for example, 6, it means both numbers are divisible by 6. 
        This implies that all divisors of 6 also divide these two numbers.
    */
    int cnt = 0;
    for(int i=1;i*i<=gcd;i++){
        if(gcd % i == 0){
            if((gcd)/i != i){
                cnt += 2;
            }
            else cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}