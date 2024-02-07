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
    set<int> st;
    for(int i=1,x;i<=n;i++){
        cin >> x;
        st.insert(x);
    }
    int flag = st.size();
    for(int i=1;i<=n;i++){
        if(i <= flag) cout << flag << " ";
        else{
            cout << ++flag << " ";
        }
    }
    cout << endl;
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