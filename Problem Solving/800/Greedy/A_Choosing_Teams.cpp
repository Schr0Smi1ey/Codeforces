#include<bits/stdc++.h>
using namespace std;
// choosing teams
int main()
{
    int n,k,temp,count=0;
    cin>>n>>k;
    while(n--)
    {
        cin>>temp;
        //5-arr[i]-k; // most time can join - join before - k time joining = remaining_oppurtunity
        if(5-temp-k>=0) // after k time joining 
        count++;
    }
    cout<<count/3;
    return 0;
}