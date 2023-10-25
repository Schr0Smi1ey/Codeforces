#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int s;cin >> s;
    string ans = "";
    int fre[10] = {0};
    int n = s > 9 ? 9 : s;
    while(s){
        if(s > 9){
            ans += to_string(n);
            s -= n;
            fre[n]++;
            n--;
        }
        else{
            if(fre[s] == 0){
                ans += to_string(s);
                s -= s;
            }
            else{
                ans += to_string(n);
                s -= n;
                fre[n]++;
                n--;
            }
        }
    }
    reverse(ans.begin(),ans.end());
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