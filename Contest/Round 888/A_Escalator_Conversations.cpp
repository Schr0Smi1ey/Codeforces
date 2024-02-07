#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution()
{
    int n,m,k,h;cin>>n>>m>>k>>h;int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        arr[i] = abs(h-arr[i]);
    }
    int step[m],count = 0;
    for(int i=0;i<m;i++)
    {
        step[i] = (i+1)*k;
    }
    for(int i=0;i<n;i++)
    {
        bool flag = false;
        for(int j = 0;j<m;j++)
        {
            for(int k=0;k<m;k++)
            {
                if(j==k)
                continue;
                if(abs(step[k]-step[j])==arr[i])
                {
                    flag = true;
                    count++;
                    break;
                }
            }
            if(flag)
            break;
        }
    }
    cout<<count<<endl;
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