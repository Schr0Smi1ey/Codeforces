#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
signed main()
{
    fastio;
    int n;cin >>  n;
    vector<pair<int,int>> arr(n),ans(n);
    vector<int> fre(1e5 + 5 , 0);
    for(int i=0;i<n;i++){
        cin >> arr[i].first >> arr[i].second;
        fre[arr[i].first]++;
    }
    for(int i=0;i<n;i++){
        ans[i].first = n-1;
        ans[i].first += fre[arr[i].second];
        ans[i].second = 2*(n-1) - ans[i].first;
    }
    for(auto x : ans){
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}
/*
    for(int i = 0; i < n; i++)
    cnt[ x[i] ]++;

    for(int i = 0; i < n; i++)
    {
        ans_home[i] = n - 1;
        ans_home[i] += cnt[ y[i] ];

        ans_away[i] = 2 * (n - 1) - ans_home[i];
    }
*/