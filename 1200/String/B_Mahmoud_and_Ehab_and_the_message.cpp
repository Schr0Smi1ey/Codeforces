#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
signed main()
{
    fastio;
    int n,m,k;cin >> n >> k >> m;
    map<string,int> mp;string str;
    vector<int> cost(n);
    for(int i=0;i<n;i++)
    {cin >> str;mp[str] = i;}
    for(int i=0;i<n;i++)
    cin >> cost[i];
    vector<int> group(n);
    priority_queue<int,vector<int>,greater<int>> pq[k];
    for(int i=0;i<k;i++)
    {
        int loop,x;cin >> loop;
        while(loop--)
        {
            cin >> x;
            group[x-1] = i;
            pq[i].push(cost[x-1]);
        }
    }
    int total_cost = 0;
    for(int i=0;i<m;i++)
    {
        cin >> str;
        total_cost += pq[group[mp[str]]].top();
    }
    cout << total_cost;
    return 0;
}