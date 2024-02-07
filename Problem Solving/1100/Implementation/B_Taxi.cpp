#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
void solution()
{
    int n,t;cin>>n;int a[5]={0};
    while(n--)
    {
        cin>>t;
        a[t]++;
    }
    a[1]= max(a[1]-a[3],0);
    cout<<a[4]+a[3]+(a[1]+2*a[2]+3)/4;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solution();
    return 0;
}