#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution()
{
    int n;cin >> n;
    vector<bool> s(1e3,false);
    vector<int> d(1e3,0);
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin >> a >> b;
        s[a] = true;
        if(d[a])
        d[a] = min(d[a],b);
        else
        d[a] = b;
    }
    int cnt = 0;
    int flag = 0;
    while(true)
    {
        for(int i=0;i<=cnt;i++)
        {
            if(s[i])
            {
                d[i] -= 2;
                if(d[i] <= 0)
                {
                    flag = 1;
                    break;
                }
            }
        }
        if(flag)
        break;
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