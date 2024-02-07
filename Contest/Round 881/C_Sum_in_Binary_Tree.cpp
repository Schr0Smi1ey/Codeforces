#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
void solution()
{
    ll n;
    cin>>n;
    ll sum = 0;
    while(n>=1)
    {
        sum+=n;
        n/=2;
    }
    cout<<sum<<endl;
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