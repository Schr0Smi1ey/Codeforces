#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
#define mypower(x,n) ({int _p=1;for(int _i=0;_i<n;_i++){_p*=x;}_p;})
#define getbit(n,i) (((n) & (1LL << (i))) !=0)
int search(int *arr,int n,int target)
{
    int low = 0,high = 2e9,ans;
    while(low<=high)
    {
        int sum = 0;
        int mid = low + (high-low)/2;
        for(int i=0;i<n;i++)
        {
            sum+=(arr[i]+mid)*(arr[i]+mid);
            if(sum>target)
            break;
        }
        if(sum==target)
        {
            ans = mid/2;
            break;
        }
        else if(sum>target)
        {
            high = mid;
        }
        else
        low = mid;
    }
    return ans;
}
void solution()
{
    int n,c;cin>>n>>c;int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<search(arr,n,c)<<endl;;
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