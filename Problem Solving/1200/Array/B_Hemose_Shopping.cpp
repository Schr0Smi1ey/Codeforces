#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e9;
void solution()
{
    int n,x;cin >> n >> x;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b,b+n);
    bool ans = false;
    for(int i=n-x;i<x;i++)
    {
        if(a[i] != b[i])
        {
            ans = true;
            break;
        }
    }
    puts(ans?"NO":"YES");
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