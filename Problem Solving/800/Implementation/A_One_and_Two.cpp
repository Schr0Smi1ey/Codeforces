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
    int count=0,count1=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==2)
        count++;
        count1=0;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]==2)
            count1++;
        }
        if(count==count1)
        {
            cout<<++i<<endl;
            return;
        }
    }
    cout<<-1<<endl;
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