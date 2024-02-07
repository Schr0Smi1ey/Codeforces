#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
#define mypower(x,n) ({int _p=1;for(int _i=0;_i<n;_i++){_p*=x;}_p;})
#define getbit(n,i) (((n) & (1LL << (i))) !=0)
void solution()
{
    int loop = (8*8);
    string result = "";
    for(int i=0;i<loop;i++)
    {
        char ch;cin>>ch;
        if(ch!='.')
        result+=ch;
    }
    cout<<result<<endl;
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