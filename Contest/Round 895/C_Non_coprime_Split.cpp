#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution()
{
    int l, r;
    cin >> l >> r;
    for(int i=max(4ll,l);i<=r;i++)
    {
        for(int j = 2; j*j <= i ;j++)
        {
            if(i%j == 0)
            {
                cout << j << " " << i-j << endl;
                return;
            }
        }
    }
    cout << -1 << endl;
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