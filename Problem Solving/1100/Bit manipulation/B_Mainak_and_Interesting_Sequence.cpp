#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
#ifdef KARIM
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 +5;

void solution(){
    int n,m;cin >> n >> m;
    if(m >= n){
        if(n&1){
            cout << "Yes" << endl;
            for(int i=0;i<n-1;i++){
                cout << 1 << " ";
                m--;
            }
            cout << m << endl;
        }
        else{
            if(((m-n+2) % 2 == 0) && ((m-n+2)/2) >= 1) {
            cout << "Yes" << endl;
            for(int i=1;i<=n-2;i++){
                cout << 1 << " ";
                m--;
            }
            cout << m/2 <<  " " << m/2 << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
    }
    else{
        cout << "No" << endl;
    }
}

int32_t main(){
    #ifndef KARIM
    fastio;
    #endif
    int t = 1;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}