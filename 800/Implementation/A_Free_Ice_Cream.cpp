#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define int long long int
#define getbit(n,i) (((n) & (1LL << (i))) !=0)
void solution()
{
    int n,x,count = 0;cin>>n>>x;
    while(n--)
    {
        char ch;int d;cin>>ch>>d;
        if(ch=='+')
        x+=d;
        else
        {
            if(d>x)
            count++;
            else
            x-=d;
        }
    }
    cout<<x<<" "<<count<<endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solution();
    return 0;
}