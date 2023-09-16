#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
signed main()
{
    fastio;
    int n;cin >> n;
    if(n&1)
    cout << -1;
    else
    {
        int odd = 1,even = 2;
        while(n)
        {
            cout << even << " " << odd << " ";
            even += 2;
            odd += 2;
            n-=2;
        }
    }
    return 0;
}