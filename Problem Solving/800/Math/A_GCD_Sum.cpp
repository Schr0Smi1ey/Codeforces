#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
int digit_sum(int n)
{
    int ans = 0;
    while(n)
    {
        ans += n%10;
        n/=10;
    }
    return ans;
}
void solution()
{
    int n;cin >> n;
    if(__gcd(n,digit_sum(n)) > 1)
    {
        cout << n << endl;
    }
    else
    {
        while(true)
        {
            n++;
            if(__gcd(n , digit_sum(n)) > 1)
            {
                cout << n << endl;
                return;
            }
        }
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