#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e9;
signed main()
{
    fastio;
    int n;cin >> n;
    int arr[n+1];
    for(int i=1;i<=n;i++)
    cin >> arr[i];
    for(int i=1;i<=n;i++) 
    {
        int x = arr[arr[i]];
        if(i == arr[x]) // very similar to dfs
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}