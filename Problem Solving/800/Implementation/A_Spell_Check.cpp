#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
signed main()
{
    fastio;
    int t;cin >> t;
    string fixed = "Timur";
    sort(fixed.begin(),fixed.end());
    while(t--){
        int n;cin >> n;
        string str;cin >> str;
        sort(str.begin(),str.end());
        (fixed == str)?cout << "YES":cout << "NO";
        cout << endl;
    }
    return 0;
}