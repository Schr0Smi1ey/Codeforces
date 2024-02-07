#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    string s,t;cin >> s >> t;
    for(int i=0;i<t.size();i++){
        if(t[i] == 'a'){
            if(t.size() == 1){
                cout << 1 << endl;
            }
            else{
                cout << -1 << endl;
            }
            return;
        }
    }
    cout << (1LL << s.size()) << endl;
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