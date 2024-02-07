#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int n,a,b,p,q;cin >> n >> a >> b >> p >> q;
    int x = n/a,y = n/b;
    int lcm = (a*b)/__gcd(a,b);
    int common = n/lcm;
    x -= common;
    y -= common;
    cout << (x*p) + (y*q) + (common*max(p,q)) << endl;
}
signed main()
{
    fastio;
    solution();
    return 0;
}