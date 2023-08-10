#include<bits/stdc++.h>
using namespace std;
void solution()
{
    int n,x;cin >> n >> x;
    string str;cin >> str;
    bool flag = true;
    for(int i = 0; i < n; i++)
    {
        if(str[i]-'0' < x && flag == true)
        {
            flag = false;
            cout << x;
            i--;
        }
        else 
        cout << str[i];
    }
    if(flag)
    cout << x << endl;
    else
    cout << endl;
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