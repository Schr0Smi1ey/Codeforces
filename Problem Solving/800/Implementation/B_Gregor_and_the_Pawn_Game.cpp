#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
#define mypower(x, n) ({int p=1;for(int i=0;i<n;i++){p*=x;}p;})
#define getbit(n,i) (((n) & (1LL << (i))) !=0)
void solution()
{
    int n;cin>>n;string str,arr;
    cin>>str>>arr;
    int count = 0;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='0' && arr[i]=='1')
        {
            count++;continue;
        }
        else if(i>0 && str[i-1]=='1' && arr[i]=='1')
        {
            count++;str[i-1]='0';continue;
        }
        else if(i<n && str[i+1]=='1' && arr[i]=='1')
        {
            count++;str[i+1]='0';continue;
        }
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