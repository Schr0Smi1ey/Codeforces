#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
#define getbit(n,i) ((n) & (1LL<<(i)))
void solution(){
    int n;cin >> n;
    if(n < 7){
        cout << "NO" << endl;
    }
    else{
        if((n-1-2)%3 !=0 && (n-1-2) != 1 && (n-1-2) != 2){
            cout << "YES" << endl << 1 << " " << 2 << " " << n-1-2 << endl;
        }
        else if((n-1-4)%3 !=0 && (n-1-4) != 1 && (n-1-4) != 4){
            cout << "YES" << endl << 1 << " " << 4 << " " << n-1-4 << endl; 
        }
        else{
            cout << "NO" << endl;
        }
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