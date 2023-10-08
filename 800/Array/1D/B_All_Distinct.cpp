#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
#define getbit(n,i) ((n) & (1LL<<(i)))
void solution(){
    int n,x;cin >> n;
    set<int> st;
    for(int i=0;i<n;i++){
        cin >> x;
        st.insert(x);
    }
    if((n-st.size()) % 2 == 0){
        cout << st.size() << endl;
    }
    else{
        cout << st.size() - 1 << endl;
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