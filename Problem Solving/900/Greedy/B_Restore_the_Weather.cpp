#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int n,k;cin >> n >> k;
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i].first;
        a[i].second = i;
    }
    int b[n],ans[n];
    for(auto &x : b){
        cin >> x;
    }
    sort(a.begin(),a.end());
    sort(b,b+n);
    for(int i=0;i<n;i++){
        ans[a[i].second] = b[i];
    }
    for(auto x : ans) cout << x << ' ';
    cout << endl;
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