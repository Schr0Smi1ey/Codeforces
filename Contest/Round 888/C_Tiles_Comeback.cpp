#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution()
{
    int n,k;cin>>n>>k;int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int count =0,count2=0,i=0;
    while(count<k && i<n)
    {
        if(arr[i]==arr[0])
        count++;
        i++;
    }
    while(i<n && count2<k)
    {
        if(arr[i]==arr[n-1])
        count2++;
        i++;
    }
    if((arr[0]==arr[n-1] && count>=k) ||  (count>=k && count2>=k))
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
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