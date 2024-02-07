#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution()
{
    int n;cin >> n;
    string str;cin >> str;
    string result = "";
    for(int i=0;i<str.size();i++)
    {
        char c = tolower(str[i]);
        if(!result.empty() && result.back() == c);
        else
        result += c;
    }
    cout << (result == "meow"?"YES" : "NO") << endl;
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