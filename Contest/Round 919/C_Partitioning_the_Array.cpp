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
vector<int> getDivisors(int n){
    vector<int> divisor;
    for(int i=1;i*i <= n;i++){
        if(n % i == 0){
            divisor.push_back(i);           
            if(i != n/i){
                divisor.push_back(n/i);
            }
        }
    }
    return divisor;
}
void solution() {
    int n;cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    vector<int> div = getDivisors(n);
    int ans = 0;
    for(auto x : div){
        int gc = 0;
        for(int i=0;i < n - x;i++){
            gc = __gcd(gc,abs(arr[i] - arr[i+x]));
        }
        if(gc >= 2){
            bool flag = true;
            for(int i=0;i<n-x;i++){
                if(arr[i] % gc != arr[i+x] % gc){
                    flag = false;break;
                }
            }
            if(flag) ans++;
        }
        else if(gc == 0){
            ans++;
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
