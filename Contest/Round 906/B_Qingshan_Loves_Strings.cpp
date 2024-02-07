// Upsolved
#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int n,m;cin >> n >> m;
    string s,t;cin >> s >> t;
    bool flag = true;
    bool initial = true;
    for(int i=1;i<t.size();i++){
        if(t[i] == t[i-1]){
            initial = false;
            break;
        }
    }
    for(int i=0;i<n-1;i++){
        if(s[i] == s[i+1]){
            if(s[i] == t[0] || s[i+1] == t.back()){
                flag = false;
                break;
            }
            else{
                if(!initial){
                    flag = false;
                    break;
                }
            }
        }
    }
    puts(flag?"Yes":"No");
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