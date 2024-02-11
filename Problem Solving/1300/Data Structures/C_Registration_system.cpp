#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int

signed main() {
    fastio;
    int t;
    cin >> t;
    map<string, int> mp;
    while(t--) {
        string str;
        cin >> str;
        if(mp[str] == 0)
            cout << "OK" << endl;
        else
            cout << str << mp[str] << endl;
        mp[str]++;
    }
    return 0;
}
