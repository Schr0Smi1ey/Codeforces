#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution()
{
    int a,b,c;cin >> a >> b >> c;
    
    int new_a = b - (c-b);
    if(new_a >= a && new_a > 0 && new_a % a == 0)
    {
        cout << "YES" << endl;return;
    }

    int new_b = a + (c-a)/2;
    if(new_b >= b && (c-a)%2 == 0 && new_b > 0 && new_b % b == 0)
    {
        cout << "YES" << endl; return;
    }

    int new_c = a + (2*(b-a));
    if(new_c >= c && new_c > 0 && new_c % c == 0)
    {
        cout << "YES" << endl; return;
    }

    cout << "NO" << endl;
}
signed main()
{
    int t;cin >> t;
    while(t--)
    {
        solution();
    }
    return 0;
}