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
    int zero = 0;
    for(auto x : str){
        if(x == '0')
            zero++;
    }
    if(zero == 0){
        cout << "DRAW" << endl;
    }
    else if(zero % 2 == 0 || zero == 1){
        cout << "BOB" << endl;
    }
    else{
        cout << "ALICE" << endl;
    }
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
