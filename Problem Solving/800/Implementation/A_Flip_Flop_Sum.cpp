#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
void solution()
{
    int n;
    cin>>n;
    int arr[n];
    int sum = 0;
    bool flag = false;
    bool one = true;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
        if(i>0)
        {
            if(arr[i]==-1 && arr[i-1]==-1)
            flag = true;
        }
        if(arr[i]==-1)
        one = false;
    }
    if(flag)
    cout<<sum+4<<endl;
    else if(one)
    cout<<sum-4<<endl;
    else
    cout<<sum<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solution();
    }
    return 0;
}