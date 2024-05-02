#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 + 5;

void solution() {
    int x;cin >> x;
    int y = -1,maxima = -1;
    for(int i=1;i < x;i++){
        if((__gcd(i,x) + i) > maxima){
            y = i;
            maxima = (__gcd(i,x) + i);
        }
    }
    cout << y << endl;
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
