#include<bits/stdc++.h>
using namespace std;
void solution()
{
    string str; cin >> str;
    str.back() = str.front();
    cout << str << endl;
}
signed main()
{
    int t; cin >> t;
    while(t--)
    {
        solution();
    }
    return 0;
}