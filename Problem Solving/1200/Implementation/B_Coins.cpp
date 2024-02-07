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
    vector<string> v(3);
    int a = 0,b = 0, c = 0;
    for(int i=0;i<3;i++){
        cin >> v[i];
        if(v[i][1] == '<'){
            swap(v[i][0],v[i][2]);
            v[i][1] = '>';
        }
        if(v[i][0] == 'A') a++;
        else if(v[i][0] == 'B') b++;
        else c++;
    }
    string ans = "Impossible";
    if(a == 2){
        ans = "A";
        if(b == 1){
            ans += "BC";
        }
        if(c == 1) ans += "CB";
    }
    if(b == 2){
        ans = "B";
        if(a == 1) ans += "AC";
        if(c == 1) ans += "CA";
    }
    if(c == 2){
        ans = "C";
        if(a == 1) ans += "AB";
        if(b == 1) ans += "BA";
    }
    if(ans != "Impossible") reverse(ans.begin(),ans.end());
    cout << ans;
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
