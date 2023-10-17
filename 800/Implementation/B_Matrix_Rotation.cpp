#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
#define getbit(n,i) ((n) & (1LL<<(i)))
void solution(){
    int a,b,c,d;cin >> a >> b >> c >> d;
    if(a > b && c > d && a > c && b > d){
        cout << "YES" << endl;
    }
    else if(c > a && d > b && c > d && a > b){
        cout << "YES" << endl;
    }
    else if(d > c && d > b && c > a && b > a){
        cout << "YES" << endl;
    }
    else if(b > d && b > a && d > c && a > c){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
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