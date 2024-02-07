#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution()
{
    int n,k;cin >> n >> k;
    int pos = n,neg = 0;
    bool flag = false;
    while(neg <= pos )
    {
        int temp = (pos * (pos -1))/2;
        int temp2 = (neg * (neg-1))/2;
        if((temp + temp2) == k)
        {
            flag = true;
            break;
        }
        neg++;pos--;
    }
    if(flag)
    {
        cout << "YES" << endl;
        while(pos--)
        cout<< 1 << " ";
        while(neg--)
        cout << -1 << " ";
        cout << endl;
    }
    else
    cout << "NO" <<endl;
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