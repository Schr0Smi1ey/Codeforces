#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    string str;cin >> str;
    int ans = 0;
    for(int i=0;i<str.size();i++){
        if(str[i] == '1') {ans = 1;continue;}
        ans++;
        if(str[i] == '0') break;
    }
    cout << ans << endl;
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