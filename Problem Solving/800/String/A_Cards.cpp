#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
signed main()
{
    fastio;
    int x;
    string str; cin >> x >> str;
    int n = 0,z = 0;
    for(auto x : str)
    {
        if(x == 'n') n++;
        if(x == 'z') z++;
    }
    while(n--)
    cout << 1 << " ";
    while(z--)
    cout << 0 << " ";
    return 0;
}