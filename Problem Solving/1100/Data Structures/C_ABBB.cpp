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
    stack<char> stk;
    for(int i=0;i<str.size();i++){
        if(stk.empty()){
            stk.push(str[i]);
        }
        else if(!stk.empty() && stk.top() == 'A' && str[i] == 'B'){
            stk.pop();
        }
        else if(!stk.empty() && stk.top() == 'B' && str[i] == 'B'){
            stk.pop();
        }
        else{
            stk.push(str[i]);
        }
    }
    cout << stk.size() << endl;
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