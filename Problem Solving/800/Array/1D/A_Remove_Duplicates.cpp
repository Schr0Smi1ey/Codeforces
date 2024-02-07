#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
signed main()
{
    fastio;
    int n,x ;cin >> n;
    unordered_map<int,int> mp;
    vector<int> v;
    int arr[n];
    for(int i = 0;i<n;i++)
    cin >> arr[i];
    for(int i = n-1;i>=0 ;i--)
    {
        if(mp.count(arr[i])==0)
        v.push_back(arr[i]);
        mp[arr[i]]++;
    }
    reverse(v.begin(), v.end());
    cout << v.size() << endl;
    for(auto x : v)
    {
        cout << x << " ";
    }
    return 0;
}