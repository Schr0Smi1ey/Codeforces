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

struct custom_hash {
  static uint64_t splitmix64(uint64_t x) {
    x += 0x9e3779b97f4a7c15;
    x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
    x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
    return x ^ (x >> 31);
  }
  size_t operator()(uint64_t x) const {
    static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
    return splitmix64(x + FIXED_RANDOM);
  }
};

void solution(){
    int n; cin >> n;
    int arr[n];
    unordered_map<int,int,custom_hash> mp;
    int sumHere = 0LL;
    mp[0] = 1;bool flag = false;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(!(i % 2)){
            sumHere += arr[i];
        }
        else{
            sumHere -= arr[i];
        }
        if(mp.find(sumHere) == mp.end()){
            mp[sumHere]++;
        }
        else{
            flag = true;
        }
    }
    if(flag){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    

    // unordered_map<int, pair<pair<int,int>,int>> mp;
    // vector<pair<int, int>> v(n);

    // v[0] = {arr[0], 0LL};
    // mp[abs(v[0].first - v[0].second)] = {v[0],0};

    // for(int i = 1; i < n; i++){
    //     v[i] = {0LL, 0LL};
    //     if((i + 1) % 2){
    //         v[i].first = (v[i - 1].first + arr[i]);
    //         v[i].second += v[i - 1].second;
    //     } else {
    //         v[i].first += v[i - 1].first;
    //         v[i].second = (v[i - 1].second + arr[i]);
    //     }
        
    //     int key = abs(v[i].first - v[i].second);
    //     mp[key] = {v[i],i};
    // }
    // // for(auto x : v){
    // //     cout <<x.first << " " << x.second << endl;
    // // }
    // for(int i = 0; i < n; i++){
    //     if(v[i].first == v[i].second){
    //         cout << "YES" << endl;
    //         return;
    //     }

    //     int x = abs(v[i].first - v[i].second);
    //     if(mp.find(x) != mp.end()){
    //         if(i != mp[x].second && abs(v[i].first - mp[x].first.first) == abs(v[i].second - mp[x].first.second)){
    //             // cout << "i" << i << endl;
    //             cout << "YES" << endl;
    //             return;
    //         }
    //     }
    // }

    // cout << "NO" << endl;
}

int32_t main(){
    #ifndef KARIM
    // fastio;
    #endif

    int t = 1;
    cin >> t;

    while(t--){
        solution();
    }

    return 0;
}
