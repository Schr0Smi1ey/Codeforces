#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define int long long int
#define getbit(n,i) (((n) & (1LL << (i))) !=0)
void solution()
{
    int n;cin>>n;
    while(true)
    {
        if(n%10==0)
        break;
        if(n%7==0)
        {
            cout<<n<<endl;
            return;
        }
        n--;
    }
    while(true)
    {
        if(n%7==0)
        {
            cout<<n<<endl;
            return;
        }
        n++;
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        solution();
    }
    return 0;
}