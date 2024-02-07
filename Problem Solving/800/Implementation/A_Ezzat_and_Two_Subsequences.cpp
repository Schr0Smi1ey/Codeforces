#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define int long long int
#define getbit(n,i) (((n) & (1LL << (i))) !=0)
void solution()
{
    int n;cin>>n;int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    sort(arr,arr+n);
    double sum = (double)arr[n-1];
    double temp = 0;
    for(int i=0;i<n-1;i++)
    {
        temp+=(double)arr[i];
    }
    temp = temp/(n-1);
    sum+=temp;
    cout<<fixed<<setprecision(9)<<sum<<endl;
    return;
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