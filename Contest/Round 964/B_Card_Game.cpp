#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 + 5;

int f(int a,int b){
    if(a > b) return 1;
    if(a == b) return 0;
    if(a < b) return -1;
}
void solution() {
    int a,b,c,d;cin >> a >> b >> c >> d;
    int cnt = 0;
    cnt += (f(a,c) + f(b,d) > 0) + (f(a,d) + f(b,c) > 0) + (f(b,d) + f(a,c) > 0) + (f(b,c) + f(a,d) > 0);
    cout << cnt << endl;
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
