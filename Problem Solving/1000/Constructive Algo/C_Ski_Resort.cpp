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
    int n, k , q;cin >> n >> k >> q;
    int arr[n];
    vector<int> fre;
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }
    int count;
    for(int i=0;i<n;i++){
        count = 0;
        while(i < n && arr[i] <=q){
            count++;
            if(arr[i+1] <= q)
                i++;
            else 
                break;
        }
        fre.push_back(count);
    }
    int sum = 0;
    int p = k;
    k--;
    for(int i = 0;i < fre.size(); i++){         
        if(fre[i] >= p){                
            int temp = ((fre[i]-k)*(fre[i]-k+1))/2LL;
            sum += temp;
        }
    }
    cout << sum << endl;
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
