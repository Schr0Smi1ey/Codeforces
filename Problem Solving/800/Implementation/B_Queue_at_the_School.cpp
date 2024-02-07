#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
signed main()
{
    fastio;
    int n , t;
    string str;
    cin >> n >> t >> str;
    while(t--)
    for(int i=0;i<n-1;i++)
    {
        if(str[i] == 'B' && str[i+1] == 'G')
        {
            swap(str[i],str[i+1]);
            i++;
        }
    }
    cout << str ;
    return 0;
}