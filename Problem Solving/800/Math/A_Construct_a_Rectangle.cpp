#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution()
{
    int a,b,c;cin>>a>>b>>c;
    if(a+b==c || b+c==a || c+a==b)
    {
        cout<<"YES"<<endl;
        return;
    }
    if((a==b && c%2==0) || (b==c && a%2==0) || (c==a && b%2==0))
    {
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
}
signed main()
{
    fastio;
    int t;cin>>t;
    while(t--)
    {
        solution();
    }
    return 0;
}