#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
signed main()
{
    fastio;
    int n;cin >> n;
    if(n % 2 == 0)
    {
        cout << n/2 << endl;
        for(int i=0;i<n/2;i++)
        {
            cout << 2 << " ";
        }
    }
    else
    {
        cout << n/2 << endl;
        for(int i=1;i<n/2;i++)
        {
            cout << 2 << " " ;
        }
        cout << 3 << endl;
    }
    return 0;
}