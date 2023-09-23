#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution()
{
    int n,w,x;
    cin >> n >> w;
    vector<int> ans;
    int p = 0,s = 0;
    for(int i=1;i<=n;i++)
    {
        cin >> x;
        if(x <= w)
        {
            if(x >= (w+1)/2)p = i;
            else if(s < (w+1)/2)
            s += x,ans.push_back(i);
        }
    }
    if(p)
    {
        cout << 1 << endl << p << endl;
        return ;
    }
    else if(s >= (w+1)/2)
    {
        cout << ans.size() << endl;
        for(auto x : ans) cout << x << " ";
        cout << endl;
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