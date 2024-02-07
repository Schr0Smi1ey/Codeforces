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
const int N = 2e5 +5;
typedef pair<int,int> pii;

void solution(){
    int n;cin >> n;
    int k = 0;
    while((1 << (k+1)) < n) k++;
    for(int i=1;i<(1 << k);i++){
        cout << i << " ";
    }
    cout << 0 << " ";
    for(int i = (1 << k);i<n;i++){
        cout << i << " ";
    }
    cout << endl;
}

int32_t main(){
    #ifndef KARIM
    // fastio;
    #endif
    int t = 1;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}