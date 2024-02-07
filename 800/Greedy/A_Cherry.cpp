#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define int long long int
#define getbit(n,i) (((n) & (1LL << (i))) !=0)
void solution()
{
    int n;cin>>n;int arr[n];
    // for(int i=0;i<n;i++)
    // cin>>arr[i];
    for(auto &x:arr)
    cin>>x;
    int maxima = arr[0]*arr[1];
    for(int i=1;i<n-1;i++)
    {
        maxima = max(maxima,arr[i]*arr[i+1]);
    }
    cout<<maxima<<endl;
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