#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
#define mypower(x, n) ({int p=1;for(int i=0;i<n;i++){p*=x;}p;})
#define getbit(n,i) (((n) & (1LL << (i))) !=0)
void solution()
{
    string str;cin>>str;
    int one = 0,zero = 0;
    for(auto x:str)
    {
        if(x=='0') zero++;
        else one++;
    }
    if(zero==one)
    cout<<zero-1<<endl; // point which should be focus...we can choose a substring removing one element
    else 
    cout<<min(zero,one)<<endl;
}
signed main()
{
    int t;cin>>t;
    while(t--)
    {
        solution();
    }
    return 0;
}