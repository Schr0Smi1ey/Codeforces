#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution()
{
    int n;cin>>n;int arr[n];
    priority_queue<int> pq;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        pq.push(arr[i]);
    }
    int k = n-1;
    bool flag = false;
    while(!pq.empty())
    {
        if((pq.top()%2==0 && arr[k]%2==0) || ((pq.top()%2!=0 && arr[k]%2!=0)))
        {
            arr[k] = pq.top();
            pq.pop();
            k--;
        }
        else
        {
            flag = true;
            break;
        }
    }
    if(flag)
    cout<<"NO"<<endl;
    else if(is_sorted(arr,arr+n))
    cout<<"YES"<<endl;
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