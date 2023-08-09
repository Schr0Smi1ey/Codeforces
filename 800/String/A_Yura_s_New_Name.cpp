#include<bits/stdc++.h>
using namespace std;
void solution()
{
    string str;cin >> str;
    int cnt = 0;
    if(str == "^") // edge case
    {
        cout<<1<<endl;
        return;
    }
    if(str[0] == '_') // edge case
    {
        cnt++;
    }
    if(str.back() == '_') // edge case
    cnt++;
    for(int i = 0; i < str.size() ; i++)
    {
        if(str[i]=='_' && i+1 < str.size())
        {
            if(str[i+1]!='^')
            cnt++;
        }
    }
    cout<< cnt << endl;
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