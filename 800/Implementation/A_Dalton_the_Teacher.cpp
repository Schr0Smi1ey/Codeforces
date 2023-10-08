#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
void solution(){
    int n,x;cin >> n;
    int cnt = 0;
    for(int i=1;i<=n;i++){
        cin >> x;
        if(x == i){
            cnt++;
        }
    }
    cout << (cnt/2 + cnt%2) << endl; // In one Step we can make happy two
}
signed main()
{
    fastio;
    int t;cin >> t;
    while(t--){
        solution();
    }
    return 0;
}