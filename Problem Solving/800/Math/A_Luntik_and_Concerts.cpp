#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution()
{
    int a,b,c; cin >> a >> b >> c;
    int total = (a + (2*b) + (3*c));
    cout << total % 2 << endl;
}
signed main()
{
    fastio;
    int t ; cin >> t;
    while(t--)
    {
        solution();
    }
    return 0;
}