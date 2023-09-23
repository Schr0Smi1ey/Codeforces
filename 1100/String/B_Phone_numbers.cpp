#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e9;
signed main()
{
    fastio;
    int n,i=0;string str;
    for(cin >> n >> str;i<n;i++)
    {
        cout << str[i] << (i%2&&i+2<n?"-":"");
    }
    return 0;
}