#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
signed main()
{
    fastio;
    int r , k;cin >> r >> k;
    vector<int> arr(r);
    for(int i = 0;i<r; i++)
    {
        cin >> arr[i];
    }
    vector<int> temp(arr);
    sort(temp.begin(),temp.end());
    vector<int> result(r);
    for(int i=0;i<r; i++)
    {
        result[i] = (lower_bound(temp.begin(),temp.end(),arr[i]) - temp.begin());
    }
    while(k--)
    {
        int p,q;cin >> p >> q;
        if((lower_bound(temp.begin(),temp.end(),arr[p-1])-temp.begin()) > (lower_bound(temp.begin(),temp.end(),arr[q-1])-temp.begin()))
        {
            result[p-1]--;
        }
        else if((lower_bound(temp.begin(),temp.end(),arr[p-1])-temp.begin()) < (lower_bound(temp.begin(),temp.end(),arr[q-1])-temp.begin()))
        {
            result[q-1]--;
        }
    }
    for(auto x : result)
    {
        cout << x << " ";
    }
}