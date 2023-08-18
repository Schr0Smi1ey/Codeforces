#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution()
{
    int n,q;cin >> n >> q;
    int arr[n];
    for(int i = 0;i < n;i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n,greater<int>());
    for(int i = 1;i < n;i++)
    {
        arr[i] = arr[i] + arr[i-1];
    }
    while(q--)
    {
        int query; cin >> query;
        if(lower_bound(arr,arr+n,query) != arr+n)
        {
            cout << lower_bound(arr,arr+n,query) - arr + 1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}
signed main()
{
    fastio;
    int t;cin >> t;
    while(t--)
    {
        solution();
    }
    return 0;
}