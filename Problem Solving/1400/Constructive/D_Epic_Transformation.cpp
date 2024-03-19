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
    int n;
    cin >> n;
    int arr[n];
    map<int,int> mp;
    for(int i = 0;i < n;i++){
        cin >> arr[i];
        mp[arr[i]]++;
    }
    priority_queue<pair<int,int>> pq;
    set<int> st;
    for(auto x : mp){
        st.insert(x.second);
        pq.push({x.second,x.first});
    }
    int sz = n;
    while(pq.size() >= 2){
        auto a = pq.top();
        pq.pop();
        auto b = pq.top();
        pq.pop();
        a.first--;
        b.first--;
        if(a.first){
            pq.push(a);
        }
        if(b.first){
            pq.push(b);
        }
        sz -= 2;
    }
    cout << sz << endl;
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