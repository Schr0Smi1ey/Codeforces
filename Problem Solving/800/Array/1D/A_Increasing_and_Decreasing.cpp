#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution()
{
    int x,y,n;
    cin >> x >> y >> n; n-=2;
    vector<int> v;
    v.push_back(y);
    int k = 1;
    while(n--)
    {
        y -= k;
        v.push_back(y);
        k++;
        if(y - k < x)
        {
            cout << -1 << endl;
            return ;
        }
    } 
    v.push_back(x);
    reverse(v.begin(),v.end());
    for(auto x : v)
    cout << x << " ";
    cout << endl;
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