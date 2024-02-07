#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
#define mypower(x, n) ({int p=1;for(int i=0;i<n;i++){p*=x;}p;})
#define getbit(n,i) (((n) & (1LL << (i))) !=0)
void solution()
{
    int n;cin>>n;
    int count = 0;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        if(a>b)
        count++;
    }
    cout<<count<<endl;
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