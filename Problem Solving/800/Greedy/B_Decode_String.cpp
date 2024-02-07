#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int n;cin >> n;
    string str,ans = "";cin >> str;
    for(int i=n-1;i>=0;i--){
        if(str[i] == '0'){
            string temp;temp+=str[i-2];temp+=str[i-1];
            ans += 'a' + ((size_t)(stoll(temp)) - 1);
            i -= 2;
        }
        else{
            ans += 'a' + (str[i] - '0' - 1);
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
}