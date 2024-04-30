#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 + 5;

void solution() {
    int n;cin >> n;
    vector<int> a(n),b(n);
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    for(int i = 0;i < n;i++){
        cin >> b[i];
    }
    int ans = 0;
    while(true){
        int cnt = 0;
        for(int i = 0;i < n;i++){
            if(a[i] > b[i]){
                cnt++;
                a.push_back(b[i]);
                sort(a.begin(),a.end());
                a.pop_back();
                ans++;
                break;
            }
        }
        if(!cnt) break;
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
