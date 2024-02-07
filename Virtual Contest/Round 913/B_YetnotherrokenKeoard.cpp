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
    bool ok[str.size() + 5];
    memset(ok,true,sizeof(ok));
    stack<pair<char,int>> small,capital;
    for(int i=0;i<str.size();i++){
        if(islower(str[i]) && str[i] != 'b') small.push({str[i],i});
        if(isupper(str[i]) && str[i] != 'B') capital.push({str[i],i});
        if(str[i] == 'b'){
            if(!small.empty()){
                ok[small.top().second] = false;
                small.pop();
            }
            ok[i] = false;
        }
        if(str[i] == 'B'){
            if(!capital.empty()){
                ok[capital.top().second] = false;
                capital.pop();
            }
            ok[i] = false;
        }
    }
    for(int i=0;i<str.size();i++){
        if(ok[i]) cout << str[i];
    }
    cout << endl;
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