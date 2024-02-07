#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
signed main()
{
    fastio;
    int n;cin >> n;
    string str;
    cin >> str;
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        int count = 0;
        while(str[i]=='x')
        {
            count++;
            if(count >= 3)
            ans++;
            if(str[i+1]=='x') i++;
            else break;
        }
    }
    cout << ans;
    return 0;
}