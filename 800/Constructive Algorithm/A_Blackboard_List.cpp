#include<bits/stdc++.h>
using namespace std;
// blackboard list
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,temp;
        cin>>n;
        int arr[n];
        bool flag=false;
        for(int i=0;i<n;i++)
        cin>>arr[i];
        sort(arr,arr+n);
        for(int i=0;i<n;i++)
        {
            if(arr[i]<0) // the final array should be consist of non-negative integer
            {
                cout<<arr[i]<<endl;
                flag = true;
                break;
            }
        }
        if(!flag)
        cout<<arr[n-1]<<endl; // after taking the difference the maximum value shouldn't be changed
    }
    return 0;
}