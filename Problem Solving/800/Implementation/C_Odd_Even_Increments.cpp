#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
void solution()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bool flag = true;
    int odd=0,even=0,odd1=0,even1=0;
    for(int i=0;i<n;i++)
    {
        if(i&1)
        {
            if(arr[i]&1)
            odd++;
            else
            even++;
        }
        else
        {
            if(arr[i]&1)
            odd1++;
            else
            even1++;
        }
    }
    if(odd>0 && even>0)
    flag = false;
    if(odd1>0 && even1>0)
    flag = false;
    if(flag)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        solution();
    }
    return 0;
}