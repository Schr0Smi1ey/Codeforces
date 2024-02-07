#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
void solution(){
    int n;cin >> n;
    vector<pair<int,int>> v(n);
    bool ans = true;
    cin >> v[0].first >> v[0].second;
    int x =  v[0].first,flag = v[0].second;
    for(int i=1;i<n;i++){
        cin >> v[i].first >> v[i].second;
        if(v[i].first >= x && v[i].second >=flag){
            ans = false;
        }
    }
    if(ans){
        cout << x << endl;
    }
    else{
        cout << -1 << endl;
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