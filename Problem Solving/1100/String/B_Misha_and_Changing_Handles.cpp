#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e9;
signed main()
{
    fastio;
    int n;cin >> n;
    map<string,string> old,mp;
    while(n--)
    {
        string a,b; cin >> a >> b;
        if(mp.count(a))
        {
            string temp = mp[a];
            old[mp[a]] = b;
            mp.erase(a);
            mp[b] = temp;
        }
        else
        {
            old[a] = b;
            mp[b] = a;
        }
    }
    cout << old.size() << endl;
    for(auto x : old)
    {
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}