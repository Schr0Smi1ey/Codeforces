#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution()
{
    int n,t=0,cmp = 0,x;cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> x;
        t = max(t,x);
        if(t==i) cmp++;
    }
    cout << cmp << endl;
}
signed main()
{
    fastio;
    int t;cin >> t;
    while(t--)
    {
        solution();
    }
    return 0;
}