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
    sort(arr,arr+n);
    int cost = 0,i=0,j=n-1;
    while(i<=j)
    {
        cost+=arr[j]-arr[i];
        i++;
        j--;
    }
    cout<<cost<<endl;
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