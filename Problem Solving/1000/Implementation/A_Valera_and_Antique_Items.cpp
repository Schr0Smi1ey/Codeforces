#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
signed main()
{
    fastio;
    int n,v;cin >> n >> v;
    vector<int> arr;
    for(int i=1;i<=n;i++)
    {
        int k,x,minima = INT_MAX;cin >> k;
        while(k--)
        {
            cin >> x;
            minima = min(minima,x);
        }
        if(minima < v)
        {
            arr.push_back(i);
            v--;
        }
    }
    cout << arr.size() << endl;
    for(auto x : arr)
    {
        cout << x << " ";
    }
    return 0;
}