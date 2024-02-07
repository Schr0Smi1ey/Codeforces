#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
#define mypower(x,n) ({int _p=1;for(int _i=0;_i<n;_i++){_p*=x;}_p;})
#define getbit(n,i) (((n) & (1LL << (i))) !=0)
void solution()
{
    int n,x;cin>>n>>x;int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    sort(arr,arr+n);
    int max_ok = INT_MIN;
    if(n==1)
    {
        cout<<0<<endl;
        return;
    }
    for(int i=1;i<n;i++)
    {
        int count = 1;
        while(i<n && (arr[i]-arr[i-1]<=x))
        {
            count++;
            i++;
        }
        max_ok = max(count,max_ok);
    }
    cout<<(n-max_ok)<<endl;
}
signed main()
{
    fastio;
    int t;cin>>t;
    while(t--)
    {
        solution();
    }
    return 0;
}