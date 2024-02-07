#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
void solution()
{
    int n,k,x;cin >> n >> k >> x;
    if(n >= k && x >= k-1)
    {
        int sum = 0;
        for(int i=0;i<k;i++)
        {
            sum += i;
            n--;
        }
        if(x == k)
        {
            sum += n*(k-1);
        }
        else
        {
            sum += n*(x);
        }
        cout << sum << endl;
    }
    else
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