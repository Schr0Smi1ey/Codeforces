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
    int n,k;cin >> n >> k;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        cin >> b[i];
    }
    priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;
    for(int i=0;i<n;i++){
        pq.push({b[i]/a[i],{abs(a[i] - (b[i]%a[i])),a[i]}});
    }
    while(k > 0){
        int have = pq.top().first,need = pq.top().second.first,r = pq.top().second.second;
        if(need > k){
            break;
        }
        pq.pop();
        pq.push({have+1,{r,r}});
        k -= need;
    }
    cout << pq.top().first;
}

int32_t main(){
    #ifndef KARIM
    fastio;
    #endif
    int t = 1;
    // cin >> t;
    while(t--){
        solution();
    }
    return 0;
}