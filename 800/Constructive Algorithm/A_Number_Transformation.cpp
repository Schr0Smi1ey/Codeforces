#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int x,y;cin >> x >> y;
    if(x > y || (y % x) != 0){
        cout << 0 << " " << 0 << endl;
    }
    else{
        cout << 1 << " " << y/x << endl;
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