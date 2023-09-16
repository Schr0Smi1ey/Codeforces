#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int n;
    cin >> n;
    map<char,int> m;
    for(int i = 0;i < n;++i)
    {
        string s;
        cin >> s;
        for(char c : s)
        m[c]++;
    }
    bool flag = 1;
    for(pair<char,int> e : m)
    flag &= e.second % n == 0;
    cout << (flag ? "Yes\n" : "No\n");
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solution();
    }
    return 0;
}