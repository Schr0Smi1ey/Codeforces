#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 + 5;
 
void solution() {
    int a,b,c,d;cin >> a >> b >> c >> d;
    if(a > b) swap(a,b);
    int found = 0;
    for(int i = a;i <= b;i++){
        found += i == c;
        found += i == d;
    }
    if(found == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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