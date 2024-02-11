#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
void solution()
{
    int n;cin>>n;int arr[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    int prefix_sum[n+1];
    prefix_sum[0]=0;
    for(int i=1;i<=n;i++)
    {
        prefix_sum[i]=prefix_sum[i-1]+arr[i];
    }
    int ans = n;
    for(int i=1;i<=n;i++)
    {
        int max_len = i;
        bool flag = true;
        for(int L=i+1;L<=n;)
        {
            int R=L;
            int temp = 0;
            while(R<=n && temp<prefix_sum[i])
            {
                temp+=arr[R];
                R++;
            }
            if(temp==prefix_sum[i])
            {
                max_len = max(max_len,R-L);
                L=R;
            }
            else
            {
                flag = false;
                break;
            }
        }
        if(flag)
        ans = min(ans,max_len);
    }
    cout<<ans<<endl;
}
int main()
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