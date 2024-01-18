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
void ss(int a,string &c){
    int k = 10;
    while(a){
        int x = (a%10);
        a /= 10;
        if(x == 0)continue;
        c[k--] = (x + '0');
    }
}
void solution() {
    int a,b;cin >> a >> b;
    int ans = a+b;
    string c(11,'0'),d(11,'0'),e(11,'0');
    ss(a,c);ss(b,d);ss(ans,e);
    if(stoll(c) + stoll(d) == stoll(e))
    cout << "YES";
    else{
        cout << "NO" << endl;
    }
}

int32_t main() {
    #ifndef KARIM
    fastio;
    #endif
    int t = 1;
    while(t--) {
        solution();
    }
    return 0;
}
