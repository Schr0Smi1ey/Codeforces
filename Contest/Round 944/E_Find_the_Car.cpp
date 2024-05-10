#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 + 5;

void solution() {
    int n,k,q;cin >> n >> k >> q;
    int dis[k],time[k],temp[k];
    for(int i = 0;i < k;i++){
        cin >> dis[i];
    }
    for(int i =0;i < k;i++){
        cin >> time[i];
    }
    while(q--){
        int val;cin >> val;
        if(val <= dis[0]){
            cout << (int)((double(time[0])/dis[0])*val) << ' ';
            continue;
        }
        int index = lower_bound(dis,dis + k,val) - dis;
        double timee = double((double((time[index] - time[index-1]))/double((dis[index] - dis[index-1]))));
        double diss = double(val - dis[index-1]);
        int ans = time[index-1] + double(timee * diss);
        cout << ans << ' ';
    }
    cout << endl;
}

int32_t main() {
    fastio;
    int t = 1;
    cin >> t;
    while(t--) {
        solution();
    }
    return 0;
}
