#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
signed main()
{
    fastio;
    int n,m,z=1,k=0;cin >> n >> m;
    string str = "";
    if(m - (n*2) > 2 or n> m + 1) // n can be maximum equal to m 
    {
        cout << -1 << endl;
    }
    else 
    {
        while(n or m)
        {
            if((m > n && k < 2) or z == 0)
            {
                z = 1;
                m--;
                k++;
            }
            else
            {
                z = 0;
                n--;
                k = 0;
            }
            cout << z ;
        }
    }
    return 0;
}