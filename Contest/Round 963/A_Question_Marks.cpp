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
    string str;cin >> str;
    int a,b,c,d;
    a = b = c = d = 0;
    for(auto ch : str){
        a += (ch == 'A');
        b += (ch == 'B');
        c += (ch == 'C');
        d += (ch == 'D');
    }
    int ans = min(a,n) + min(b,n) + min(c,n) + min(d,n);
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
