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
    int n,x;cin >> n >> x;
   map<int,pair<int,bool>> mp;
    for(int i=0;i<n;i++){
        int p;cin >> p;
        mp[p] = {++mp[p].first,false};
    }
    int cnt = 0;
    for(auto p : mp){
        int f = p.first;
        int n = f*x;
        if(!p.second.second && !mp[n].second){
            if(p.second.first >= mp[n].first){
                cnt += p.second.first - mp[n].first;
                p.second.second = true;
                mp[n].second = true;
            }
            else{
                p.second.second = true;
                mp[n].first -= p.second.first;
            }
        }
    }
    cout << cnt << endl;
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