#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 + 5;
void solution() {
    int n,m;cin >> n >> m;
    string a,b;cin >> a >> b;
    int ans = 0,last = -1;
    for(int i = 0;i < n;i++){
        auto ch = a[i];
        int j = last + 1;
        for(j = last + 1;j < m;j++){
            if(b[j] == ch){
                ans++;
                last = j;
                break;
            }
        }
        // cout << "test : " << last << " " << i << endl;
        if(j == m){
            break;
        }
    }
    cout << ans << endl;
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
