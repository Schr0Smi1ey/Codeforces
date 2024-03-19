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
#include "DEBUG_xLATE.h"
#else
#define HERE
#define debug(args...)
#endif
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 + 5;

void solution() {
    int n;cin >> n;
    int ans=0;
    int fre[2*n+5] = {0};
    int sum=1,p=-1;
    for(int i = 0,x;i < n;i++){
        cin >> x;
        if(x == p)
            sum++;
        else
            sum = 1;
        fre[x] = max(fre[x],sum);
        p = x;
    }
    sum = 1;p = -1;
    for(int i = 0,x;i < n;i++){
        cin >> x;
        if(x == p)
            sum++;
        else 
            sum = 1;
        ans = max(ans,sum + fre[x]);
        p = x;
    }
    sort(fre,fre+(2*n+5),greater<int>());
    for(int i = 0;i <= 2*n;i++){
        ans = max(ans,fre[i]);
        if(fre[i] == 0){
            cout << ans <<endl;
            return;
        }
    }
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
