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
    int n,k;cin >> n >> k;
    int arr[n];
    set<int> st;
    int mul = 1;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        mul *= arr[i];
        st.insert(arr[i]);
    }
    vector<int> divisors = getDivisors(2023);
    vector<int> ans;bool flag = false;
    for(auto x : divisors){
        if(mul * x == 2023){
           flag = true;
           ans.push_back(x);break;
        }
    }
    k--;
    while(k--){
        ans.push_back(1);
    }
    if(flag){
        cout << "YES" << endl;
        for(auto x : ans){
            cout << x << " ";
        }
        cout << endl;
        return;
    }
    cout << "NO" << endl;
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


