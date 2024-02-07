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
const int N = 2e5 +5;
typedef pair<int,int> pii;

void solution(){
    string str;cin >> str;
    char c = str[0];
    int x = str[1] - '0';
    for(int i=1;i<=8;i++){
        if(i == x) continue;
        cout << c << i << endl;
    }
    for(char ch = 'a';ch <= 'h';ch++){
        if(ch == c) continue;
        cout << ch << x << endl;
    }
}

int32_t main(){
    #ifndef KARIM
    fastio;
    #endif
    int t = 1;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}