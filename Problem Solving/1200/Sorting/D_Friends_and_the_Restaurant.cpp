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
const int INF = 1e18;
const int N = 2e5 +5;

void solution(){
    int n;cin >> n;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i].first;
    }
    for(int i=0;i<n;i++){
        cin >> v[i].second;
    }
    sort(v.begin(),v.end(),[](const auto &x,const auto &y){
        return (x.second - x.first) < (y.second - y.first);
    });
    int cnt = 0,i = 0, j = n-1;
    while(i >= 0 && j >= 0 && i < n && j < n && i < j){
        int p = v[i].second - v[i].first,q = v[j].second - v[j].first;
        if(p + q >= 0){
            cnt++;i++;j--;
        }
        else{
            i++;
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