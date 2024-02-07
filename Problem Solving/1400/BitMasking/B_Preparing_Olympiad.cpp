#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
signed main()
{
    fastio;
    int n,l,r,x;cin>>n>>l>>r>>x;int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int ans = 0;
    for(int i=0;i<(1<<n);i++) // i<(2^n) ---> number of subset
    {
        int sum=0,count=0,minima = INT_MAX,maxima = INT_MIN;
        for(int j=0;j<n;j++) 
        {
            if(i&(1<<j))  // check the jth bit is set or not 
            {
                maxima = max(maxima,arr[j]);
                minima = min(minima,arr[j]);
                count++;
                sum+=arr[j];
            }
        }
        if(sum>=l && sum<=r && (maxima-minima>=x) && count>=2)
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}