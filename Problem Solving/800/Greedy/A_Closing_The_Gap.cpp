#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
#define mypower(x, n) ({int p=1;for(int i=0;i<n;i++){p*=x;}p;})
#define getbit(n,i) (((n) & (1LL << (i))) !=0)
void solution()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    sort(arr,arr+n);
    while(true)
    {
        int temp = arr[n-1]-arr[0];
        if(temp==0 or temp==1)
        {
            cout<<temp<<endl;return;
        }
        int val = (arr[n-1]-arr[0])/2;
        arr[0]+=val;arr[n-1]-=val;
        sort(arr,arr+n);
    }
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