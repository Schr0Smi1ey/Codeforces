#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
void solution(){
    int n,x;cin >> n;
    priority_queue<int,vector<int>,greater<int>> pq,v,pq1,v1;
    for(int i=0;i<n;i++){
        cin >> x;
        pq.push(x);
    }
    for(int i=0;i<n;i++){
        cin >> x;
        v.push(x);
    }
    int sum1 = 0,sum2 = 0;
    while(!v.empty()){
        sum1 += (pq.top() + v.top());
        v1.push(v.top());
        v.pop();
    }
    v = v1;
    while(!pq.empty()){
        sum2 += (v.top() + pq.top());
        pq.pop();
    }
    cout << min(sum1,sum2) << endl;
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


// another one
#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
void solution(){
    int n;cin >> n;
    int minima1 = INT_MAX,minima2 = INT_MAX;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
        minima1 = min(minima1,a[i]);
    }
    for(int i=0;i<n;i++){
        cin >> b[i];
        minima2 = min(minima2,b[i]);
    }
    int sum1 = 0,sum2 = 0;
    for(int i=0;i<n;i++){
        sum1 += a[i] + minima2;
    }
    for(int i=0;i<n;i++){
        sum2 += b[i] + minima1;
    }
    cout << min(sum1,sum2) << endl;
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