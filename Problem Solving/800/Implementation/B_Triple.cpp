#include<bits/stdc++.h>
using namespace std;
//triple
int main()
{
    int n,t,i,flag;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n,greater<int>());
        flag=-1;
        for(i=0;i<n-2;i++)
        {
            if(arr[i]==arr[i+1] && arr[i+1]==arr[i+2])
            {
                flag = arr[i];
                break;
            }
            if(flag!=-1)
            break;
        }
        cout<<flag<<endl;
    }
    return 0;
}