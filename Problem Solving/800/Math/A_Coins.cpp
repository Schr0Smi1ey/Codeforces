#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution()
{
    int n , k;cin >> n >> k;
    if(n % k == 0 || n % 2 == 0)
    {
        cout << "YES" << endl;
        return ;
    }
    if((n - k) > 0 && (n - k) % 2 == 0)
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
}
signed main()
{
    fastio;
    int t; cin >> t;
    while(t--)
    {
        solution();
    }
    return 0;
}