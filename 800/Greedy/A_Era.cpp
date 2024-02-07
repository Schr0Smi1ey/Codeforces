#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
#define mypower(x, n) ({int p=1;for(int i=0;i<n;i++){p*=x;}p;})
#define getbit(n,i) (((n) & (1LL << (i))) !=0)
void solution()
{
    int n;cin>>n;int arr[n];
    int step = 0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        step = max(step,x-i-1);
    }
    cout<<step<<endl;
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