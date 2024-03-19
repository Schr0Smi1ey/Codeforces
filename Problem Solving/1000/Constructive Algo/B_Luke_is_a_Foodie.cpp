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
    int n,x;cin >> n >> x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int ans = 0;
    int a = arr[0],b = arr[0] + x,c = abs(arr[0] - x),minima = INF,maxima = MINF;
    bool low = true,high = true,mid = true;
    for(int i=0;i<n;i++){
        if(low)
            low &= (abs(a - arr[i]) <= x);
        if(high)
            high &= (abs(b - arr[i]) <= x);
        if(mid)
            mid &= (abs(c - arr[i]) <= x);
        minima = min(minima,arr[i]);
        maxima = max(maxima,arr[i]);
        if(!low && !high && !mid){
            if(abs(arr[i] - minima) <= x && abs(maxima - arr[i]) <= x){
                a = arr[i];low = true;
            }
            if(abs((arr[i] + x) - minima) <= x && abs(maxima - (arr[i] + x)) <= x){
                b = arr[i] + x;high = true;
            }
            if(abs((arr[i] - x) - minima) <= x && abs((arr[i] - x) - maxima) <= x){
                c = abs(arr[i] - x);mid = true;
            }
            if(high || low || mid) continue;
            ans++;
            a = arr[i],b = arr[i] + x;c = abs(arr[i] - x);
            low = true;high = true;mid = true;minima = arr[i];maxima = arr[i];
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
    int n,x;cin >> n >> x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int ans = 0;
    int a = arr[0],b = arr[0];
    for(int i=0;i<n;i++){
        a = min(a,arr[i]);
        b = max(b,arr[i]);
        if(b - a > 2*x){
            a = b = arr[i];
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
