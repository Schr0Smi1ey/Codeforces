#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution()
{
    int n;cin >> n;
    string str;
    cin >> str;
    string temp = str;
    sort(temp.begin(),temp.end());
    int fl = 0;
    for(int i=0;i<n;i++)
    {
        if(str[fl] >= str[i])
        fl = i;
    }
    cout << str[fl];
    for(int i=0;i<n;i++)
    {
        if(i == fl)
        continue;
        cout << str[i] ;
    }
    cout << endl;
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