#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 + 5;

void solution() {
    vector<int> odd,even;
    int n;cin >> n;
    int odd_max = -1;
    for(int i = 0;i < n;i++){
        int x;cin >> x;
        if(x & 1){
            odd.push_back(x);
            odd_max = max(odd_max,x);
        }
        else 
            even.push_back(x);
    }
    if(odd.size() == 0 || even.size() == 0){
        cout << 0 << endl;
        return;
    }
    sort(even.begin(),even.end());
    int ans = 0;
    for(int i = 0;i < even.size();){
        if(odd_max > even[i]){
            odd_max += even[i];
            i++;
        }
        else{
            odd_max += even.back();
        }
        ans++;
    }
    cout << ans << endl;
}

int32_t main() {
    // fastio;
    int t = 1;
    cin >> t;
    while(t--) {
        solution();
    }
    return 0;
}
