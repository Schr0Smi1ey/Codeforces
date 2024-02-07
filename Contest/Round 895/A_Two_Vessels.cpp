#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution()
{
    int a ,b ,c ;
    cin >> a >> b >> c;
    int m = max(a,b),n = min(a,b);
    int cnt = 0;
    while(m > n)
    {
        m -= c;
        n+=c;
        cnt++;
    }
    cout << cnt << endl;
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