#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int n;char c;cin >> n >> c;
    string str; cin >> str;
    str += str;
    int ans = 0,p = -1;
    for(int i=str.size() - 1;i>=0;i--){
        if(str[i] == 'g'){
            p = i;
        }
        if(str[i] == c){
            ans = max(ans,p - i);
        }
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