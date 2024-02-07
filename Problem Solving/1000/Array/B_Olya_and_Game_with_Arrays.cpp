#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int n;cin >> n;
    priority_queue<int> pq;
    int minima = INT_MAX;
    for(int i=0;i<n;i++){
        int x,c;cin >> x;
        priority_queue<int> temp;
        for(int j = 0;j<x;j++){
            cin >> c;
            minima = min(minima,c);
            temp.push(-c);
        }
        temp.pop();
        pq.push(temp.top());
    }
    pq.pop();
    int ans = 0;
    ans += minima;
    while(!pq.empty()){
        ans += abs(pq.top());
        pq.pop();
    }
    cout << ans << endl;
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