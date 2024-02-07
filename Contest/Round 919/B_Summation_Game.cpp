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
    int n,k,x;cin >> n >> k >> x;
    int arr[n+1];
    arr[n] = 0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        arr[i] = arr[i];
    }
    sort(arr,arr+n,greater<int>());
    for(int i=n-1;i>=0;i--){
        arr[i] += arr[i+1];
    }
    if(n == 1){
        cout << 0 << endl;
        return;
    }
    int ans = -(arr[0] - arr[x]) + arr[x];
    for(int i=0;i < k;i++){
        if(i + 1 <= n){
            int minus = (arr[i+1] - arr[min(i+x+1,n)]);
            int plus = arr[min(i+x+1,n)];
            ans = max(ans,-minus+plus);
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
