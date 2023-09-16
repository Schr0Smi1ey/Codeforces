#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution()
{
    int n,x;cin >> n;
    int pos = 0,neg = 0;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        if(x > 0)
        pos += x;
        else 
        neg += abs(x);
    }
    cout << max(pos,neg) - min(pos,neg) << endl;
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