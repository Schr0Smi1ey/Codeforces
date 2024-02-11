#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int n , k;cin >> n >> k;
    vector<pair<int,int>> arr;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++)
    {
        int x; cin >> x;
        arr.push_back({x,i+1});
    }
    for(auto it : arr)
    {
        int x = it.first % k;
        if(!x) // The Ultimate Thought
        x = k;
        int y = it.second;
        v.push_back({x,-y});
    }
    sort(v.begin(),v.end(),greater<pair<int,int>>());
    for(auto x : v)
    {
        cout << -x.second << " ";
    }
    cout << endl;
}
signed main()
{
    fastio;
    int t; cin >> t;
    while(t--)
    {
        solution();
    }
    return 0;
}