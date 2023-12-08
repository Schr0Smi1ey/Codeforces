#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int n;cin >> n;
    string str;cin >> str;
    int ans = INT_MAX;
    for(char ch = 'a';ch <= 'z';ch++){
        int i=0,j = n-1,temp = 0;
        bool flag = true;
        while(i <= j){
            if(str[i] == str[j]){
                i++;j--;continue;
            }
            if(str[i] == ch){
                temp++;i++;continue;
            }
            if(str[j] == ch){
                temp++;j--;continue;
            }
            if(str[i++] != str[j--]){
                flag = false;break;}
        }
        if(flag){
            ans = min(ans,temp);
        }
    }
    if(ans == INT_MAX) cout << -1 << endl;
    else
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