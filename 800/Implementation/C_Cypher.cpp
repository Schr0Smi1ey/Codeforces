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
    int j=0;
    while(n--)
    {
        int x;cin>>x;string str;
        cin>>str;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='D')
            {
                if(arr[j]==9)
                arr[j] = 0;
                else
                arr[j]++;
            }
            else
            {
                if(arr[j]==0)
                arr[j]=9;
                else
                arr[j]--;
            }
        }
        j++;
    }
    for(auto x:arr)
    cout<<x<<" ";
    cout<<endl;
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