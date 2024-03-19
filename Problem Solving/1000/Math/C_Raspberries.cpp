#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace std;
using namespace __gnu_pbds;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
template<typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag,
        tree_order_statistics_node_update>;
#ifdef KARIM
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 + 5;

void solution() {
    int n,k;cin >> n >> k;
    map<int,int> mp;
    int ans = INF;
    for(int i = 0,x;i < n;i++){
        cin >> x;
        mp[x % k]++;
        ans = min(ans,((x % k)?k - (x%k):0));
    }
    if(k == 4){
        if(mp.find(1) != mp.end()){
            if(mp[1] >= 2){
                ans = min(ans,2LL);
            }
            ans = min(ans,3LL);
        }
        if(mp.find(2) != mp.end()){
            if(mp[2] >= 2){
                ans = min(ans,0LL);
            }
            if(mp.find(1) != mp.end()){
                if(mp[1] >= 1){
                    ans = min(ans,1LL);
                }
            }
            ans = min(ans,2LL);
        }
        if(mp.find(3) != mp.end()){
            ans = min(ans,1LL);
        }
    }
    cout << ans << endl;
}

int32_t main() {
    #ifndef KARIM
    fastio;
    #endif
    int t = 1;
    cin >> t;
    while(t--) {
        solution();
    }
    return 0;
}
