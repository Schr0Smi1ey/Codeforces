#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
#define trace(x) cout << #x << " : " << x << endl;

int32_t main() {
    fastio;
    int t;cin >> t;
    while(t--) {
        int n;cin >> n;
        string str;cin >> str;
        bool flag = false;
        if((str[0] == '1' || str.back() == '1') || str.find("11") != string::npos) {
            cout << "YES" << endl;
            flag = true;
        }
        if(!flag)
        cout << "NO" << endl;
    }
    return 0;
}
