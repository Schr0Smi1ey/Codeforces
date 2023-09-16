#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution()
{
    string str;cin >> str;
    string fixed = "Yes";
    int k = 0;
    for(int i=0;i<3;i++)
    {
        if(fixed[i] == str[0])
        {
            k = i;
            break;
        }
    }
    for(int i=0;i<str.size();i++)
    {
        if(str[i] != fixed[k%3])
        {
            cout << "NO" << endl;
            return;
        }
        k++;
    }
    cout << "YES" << endl;
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