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
const int N = 1e5 +5;
void solution(){
    int n;
    cin >> n;
    map<int,int> mp;
    for(int i = 0; i < n - 1; i++){
        int u, v;
        cin >> u >> v;
        mp[u]++;
        mp[v]++;
    }
    int cnt = 0;
    for(auto x : mp){
        if(x.second == 1){
            cnt++;
        }
    }
    cout << (cnt+1)/2 << endl;
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