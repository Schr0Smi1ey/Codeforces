#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution()
{
    int n,x,y;
    cin >> n >> x >> y;
    int lcm = (x*y)/__gcd(x,y);
    int vx = (n/x) - (n/lcm);
    int vy = (n/y) - (n/lcm);
    int plus = ((2*n - vx + 1)*vx)/2;
    int minus = (vy * (vy+1))/2;
    cout << (plus - minus) << endl;
}
signed main()
{
    fastio;
    int t;cin >> t;
    while(t--)
    {
        solution();
    }
}