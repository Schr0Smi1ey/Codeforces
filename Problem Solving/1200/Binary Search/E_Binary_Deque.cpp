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
int search(int *b,int n,int target){
    int low = 0,high = n - 1,ans = -1;
    while(low <= high){
        int mid = (low + high >> 1);
        if(b[mid] == target){
            ans = mid;
            low = mid + 1;
        }
        else if(b[mid] > target){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}
void solution() {
    int n,s;cin >> n >> s;
    int arr[n],b[n],sum = 0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        sum += arr[i];b[i] = arr[i];
        if(i){
            b[i] += b[i-1];
        }
    }
    if(sum < s){
        cout << -1 << endl;return;
    }
    int ans = INT_MAX;
    for(int i=0;i<n;i++){
        int target;
        (arr[i])?target = b[i] + s - 1:target = b[i] + s;
        int q = search(b,n,target);
        if(q != -1){
            ans = min(ans,n - (q - i + 1));
        }
    }
    if(ans == INT_MAX){
        cout << -1 << endl;return;
    }
    cout << ans << endl;
}

int32_t main() {
    #ifndef KARIM
    // fastio;
    #endif
    int t = 1;
    cin >> t;
    while(t--) {
        solution();
    }
    return 0;
}
