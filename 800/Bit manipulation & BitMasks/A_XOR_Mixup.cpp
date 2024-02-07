#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
// concept : a^a = 0
// any of the element from the array can be the ans of this question
void solution()
{
    int n,temp,flag;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        temp = arr[i];
        for(int j=0;j<n;j++)
        {
            if(j==i)
            continue;
            temp^=arr[j];
        }
        if(temp==0)
        {
            cout<<arr[i]<<endl;
            return;
        }
    }
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