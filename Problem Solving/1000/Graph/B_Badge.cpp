#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int N = 1e3 + 5;
int arr[N],fre[N];
vector<int> ans;
void dfs(int src)
{
    fre[src]++;
    if(fre[src] == 2)
    {
        ans.push_back(src);
        return;
    }
    dfs(arr[src]);
}
signed main()
{
    fastio;
    int n;cin >> n;;
    for(int i=1;i<=n;i++)
    {
        cin >> arr[i];
    }
    for(int i=1;i<=n;i++)
    {
        fill(fre,fre+N,0);
        dfs(i);
    }
    for(auto x : ans)
    cout << x << " ";
    return 0;
}