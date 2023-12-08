#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    string str;cin >> str;
    cout << ((str[0]-'a') * 25) + ((str[1] - 'a') > (str[0] - 'a')?(str[1] - 'a'):str[1] - 'a' + 1) << endl;
}
signed main()
{
    fastio;
    int t;cin >> t;
    while(t--){
        solution();
    }
    return 0;
}