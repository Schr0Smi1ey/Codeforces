#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
signed main()
{
    fastio;
    int a,b,c;cin >> a >> b >> c;
    while(c > 0){
        if(c % a == b || c % b == a || c % a == 0 || c % b == 0){
            cout << "Yes";
            return 0;
        }
        c-=a;
    }
    cout << "No";
    return 0;
}