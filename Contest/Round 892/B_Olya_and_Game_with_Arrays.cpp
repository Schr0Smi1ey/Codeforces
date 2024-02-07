#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int

void solution() 
{
    int n; cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq[n];
    
    for (int i = 0; i < n; i++) {
        int q, x; cin >> q;
        for (int j = 0; j < q; j++) {
            cin >> x;
            pq[i].push(x);
        }
    }
    if(n == 0)
    {
        cout << pq[0].top() << endl;
        return;
    }
    vector<int> mx, mn;
    int sum = 0;
    
    for (int i = 0; i < n; i++) 
    {
        mn.push_back(pq[i].top());
        pq[i].pop();
        mx.push_back(pq[i].top());
        sum += pq[i].top();
    }
    
    sort(mx.begin(), mx.end());
    sort(mn.begin(), mn.end());
    sum += (mn[0] - mx[0]);
    cout << sum << endl;
}

signed main() 
{
    fastio;
    int t; cin >> t;
    while (t--) {
        solution();
    }
    return 0;
}
