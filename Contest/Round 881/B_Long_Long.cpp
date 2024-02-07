#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
void solution()
{
    int n;
    cin>>n;
    int arr[n];
    long long sum = 0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]<0)
        sum+=(arr[i]*(-1));
        else
        sum+=arr[i];
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            while(arr[i]<=0)
            {
                i++;
            }
            count++;
        }
    }
    cout<<sum<<" "<<count<<endl;
    return;
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