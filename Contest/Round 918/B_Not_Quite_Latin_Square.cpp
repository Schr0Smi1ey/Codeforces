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

void solution(){
    char str[3][3];
    for(int i=0;i<3;i++){
        for(int j =0;j<3;j++){
            cin >> str[i][j];
        }
    }
    string ans = "ABC",temp = "";
    for(int i =0 ;i<3;i++){
        temp = "";bool flag = false;
        for(int j=0;j<3;j++){
            temp += str[i];    
            if(str[i][j] == '?') flag = true;    
        }
        if(flag) break;
    }
    for(char ch = 'A';ch <= 'C';ch++){
        bool flag = true;
        for(int i=0;i<3;i++){
            if(temp[i] == ch){
                flag = false;
            }
        }
        if(flag){
            cout << ch << endl;
            return;
        }
    }
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