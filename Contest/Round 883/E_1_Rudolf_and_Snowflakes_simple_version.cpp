#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
#define mypower(x, n) ({int p=1;for(int i=0;i<n;i++){p*=x;}p;})
#define getbit(n,i) (((n) & (1LL << (i))) !=0)
void solution()
{
    int n;cin>>n;
    for(int i=2;i<=n and (1+i+i*i)<=n ;i++)
    {
        int curr = 1,total = 1;
        while(total<n)
        {
            curr=curr*i;
            total+=curr;
        }
        if(total==n)
        {
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        solution();
    }
    return 0;
}