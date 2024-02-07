#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
#ifdef KARIM
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 +5;
char check(char ch){
    if(ch == 'a' || ch == 'e')
    return 'v';
    return 's';
}
void solution(){
    int n;cin >> n;
    string str;cin >> str;
    string result = "";
    bool flag = false;
    for(int i = 0;i<n;i++){
        if(!flag){
            result += str[i];
            flag = true;
        }
        else{
            result += str[i];
            if((i < n - 3 && check(str[i+1]) == 's' && check(str[i+2]) == 's') || (check(str[i+1] == 's') && i == n-2)){
                result += str[++i];
            }
            result += '.';
            flag = false;
        }
    }
    result.pop_back();
    cout << result << endl;
}

int32_t main(){
    #ifndef KARIM
    fastio;
    #endif
    int t = 1;
    cin >> t;
    while(t--){
        solution();
    }
    return 0;
}