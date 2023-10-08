#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
signed main()
{
    fastio;
    int n,s,a,b;cin >> s >> n;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    for(int i=0;i<n;i++){
        cin >> a >> b;
        pq.push({a,-b});
    }
    while(!pq.empty()){
        if(s > pq.top().first){
            s += (abs(pq.top().second));
            pq.pop();
        }
        else{
            cout <<"NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}