#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
#define mypower(x,n) ({int p=1;for(int i=0;i<n;i++){p*=x;}p;})
bool arr[3000];
bool check_prime(int n)
{
    if(n<=1)
    return false;
    if(n<=3)
    return true;
    if(n%2==0 || n%3==0)
    return false;
    for(int i=5;i*i<=n;i+=6)
    {
        if(n%i==0 || n%(i+2)==0)
        return false;
    }
    return true;
}
bool is_almostPrime(int i)
{
    int temp = 0;
    for(int j=2;j*j<=i;j++)
    {
        if(i%j==0 && arr[j])
        {
            temp++;
        }
        if(i%j==0 && j!=(i/j) && arr[i/j])
        {
            temp++;
        }
    }
    return temp==2;
}
signed main()
{
    fastio;
    int n,count = 0;cin>>n;
    for(int i=1;i<=n;i++)
    arr[i]=check_prime(i);
    for(int i=1;i<=n;i++)
    {
        if(is_almostPrime(i))
        count++;
    }
    cout<<count;
}