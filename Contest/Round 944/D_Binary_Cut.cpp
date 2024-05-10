#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 + 5;

int fun(string &str,char ch,int i,bool &flag){
    while(i < str.size() && str[i] == ch){
        if((ch == '0') && (i + 1) < str.size() && str[i + 1] == '1'){
            flag = true;
        }
        if((i + 1) < str.size() && str[i+1] == ch){
            i++;
        }
        else{
            break;
        }
    }
    return i;
}
void solution() {
    string str;cin >> str;
    int cnt = 0;
    bool flag = false;
    for(int i = 0;i < str.size();i++){
        cnt++;
        i = fun(str,str[i],i,flag);
    }
    if(flag){
        cnt--;
    }
    cout << cnt << endl;
}

int32_t main() {
    fastio;
    int t = 1;
    cin >> t;
    while(t--) {
        solution();
    }
    return 0;
}
