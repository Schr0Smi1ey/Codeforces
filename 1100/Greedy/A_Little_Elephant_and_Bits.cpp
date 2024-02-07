#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
signed main()
{
    fastio;
    string str;cin>>str;
    bool flag = false;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='0')
        {
            str[i]='#';
            flag = true;
            break;
        }
    }
    if(flag)
    {
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='#')
            continue;
            cout<<str[i];
        }
    }
    else
    {
        for(int i=0;i<str.size()-1;i++)
        {
            cout<<str[i];
        }        
    }
    return 0;
}