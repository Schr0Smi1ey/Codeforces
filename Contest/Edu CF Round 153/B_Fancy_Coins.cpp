// Upsolved
#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution()
{
    int n,k,one , m;
    cin >> n >> k >> one >> m;
    int need1 = n%k;
    int needk = n/k;
    int ans = 0;
    if(one > need1)
    {
        one -= need1;
    }
    else
    {
        ans += (need1-one);
        one = 0;
    }
    int have = m + (one/k);
    if(needk > have)
    {
        ans += (needk-have);
    }
    cout << ans << endl;
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