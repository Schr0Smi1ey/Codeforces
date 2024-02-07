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
    int n;cin >> n;
    string str;cin >> str;
    vector<int> v(n,INF);
    for(int i=0;i<n;i++){
        if(str[i] == '1') v[i] = 0LL;
        int p = i + 1;
        while((p-1) < n && str[p-1] == '0'){
            v[p-1] = min(v[p-1],i+1);
            p += (i+1);
        }
    }
    cout << accumulate(v.begin(),v.end(),0LL) << endl;
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