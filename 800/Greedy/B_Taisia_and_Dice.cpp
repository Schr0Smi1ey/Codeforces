#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
#define getbit(n,i) ((n) & (1LL<<(i)))
void solution(){
    int n,s,r;cin >> n >> s >> r;
    cout << s - r << " ";
    n--;
    int x = max(1LL,(int)(r/n));
    while(n--){
        if(n == 0){
            cout << r << " ";
            break;
        }
        cout << x << " ";
        r -= x;
        x = r/n;
    }
    cout << endl;
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