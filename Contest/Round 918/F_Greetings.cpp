#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace std;
using namespace __gnu_pbds;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
#ifdef KARIM
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
typedef tree<int, null_type, less<int>, rb_tree_tag,
             tree_order_statistics_node_update>
    ordered_set;
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 +5;
void solution(){
    int n;cin >> n;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(),v.end());
    ordered_set st;
    int ans = 0;
    for(int i = n-1;i >= 0;i--){
        ans += st.order_of_key(v[i].second);
        st.insert(v[i].second);
    }
    cout << ans << endl;
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
