#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution()
{
    int a,b,n;cin >> a >> b >> n;
    int c = (a^b);
    if(n % 3 == 0){
        cout << a << endl;
    }
    else if(n % 3 == 1){
        cout << b << endl;
    }
    else{
        cout << c << endl;
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