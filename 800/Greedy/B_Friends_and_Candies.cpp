#include<bits/stdc++.h>
using namespace std;
// friends and candies
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,flag,count=0;
        cin>>n;
        int arr[n];
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum%n!=0)
        {
            cout<<-1<<endl;
            continue;
        }
        else
        {
            flag=sum/n;
            for(int i=0;i<n;i++)
            {
                if(arr[i]>flag)
                count++;
            }
            cout<<count<<endl;
        }
    }
    return 0;
}
