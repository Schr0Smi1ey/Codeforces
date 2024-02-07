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
typedef pair<int,int> pii;
const int MOD = 1e9 + 7;
const int INF = 1e18;
const int N = 2e5 +5;

void solution(){
    int n;cin >> n;
    int es = 2,ee = 2*n,os = 1 , oe = n+1;
    for(int i=0;i<2;i++){
        for(int j = 0;j<n;j++){
            if(i == 0){
                if(j & 1){
                    cout << es << " ";es += 2;
                }
                else{
                    cout << ee << " ";ee -= 2;
                }
            }
            else{
                if(j&1){
                    cout << oe << " ";
                    oe += 2;
                }
                else{
                    cout << os << " ";
                    os += 2;
                }
            }
        }
        cout << endl;
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