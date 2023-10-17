#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
#define getbit(n,i) ((n) & (1LL<<(i)))
void solution(){
    int n;cin >> n;
    vector<vector<int>> v(n,vector<int>(n-1));
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            cin >> v[i][j];
        }
    }
    priority_queue<pair<int,int>> pq;
    map<int,int>mp;
    bool flag = true;
    int ans ;
    for(int i = 0;i<n-1;i++){
        for(int j=0;j<n;j++){
            if(flag)
            mp[v[j][i]]++;
            else if(v[j][i] != ans){
                cout << v[j][i] << " ";
                ans = v[j][i];
                break;
            }
        }
        for(auto x : mp){
            pq.push({x.second,x.first});
        }
        if(flag){
            cout << pq.top().second << " ";
            pq.pop();
            cout << pq.top().second << " ";
            ans = pq.top().second;
            flag = false;
        }
    }
    cout << endl;
}
signed main()
{
    fastio;
    int t;cin >> t;
    while(t--){
        solution();
    }
}