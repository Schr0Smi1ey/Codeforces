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
    int n;cin >> n;
    string str;cin >> str;
    int fre[26] =  {0};
    set<int> st;
    for(int i=0;i<str.size();i++){
        fre[str[i] - 'a']++;
    }
    cout << max(n%2,(2LL*(*max_element(fre,fre+26)) - n)) << endl;
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