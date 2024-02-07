#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution()
{
    int n;cin>>n;int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int minima=arr[0],maxima = arr[0];
    for(int i=1;i<n;i++)
    {
        minima &= arr[i];
        maxima |= arr[i];
    }
    cout<<(maxima-minima)<<endl;
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