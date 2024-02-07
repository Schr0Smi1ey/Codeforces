#include<bits/stdc++.h>
using namespace std;
void solution()
{
    string str;cin>>str;string temp = str;
    sort(temp.begin(),temp.end());
    for(int i=0;i<str.size();i++)
    {
        if(str[i]==temp.front())
        {
            cout<<str[i];
            str[i]='0';
            break;
        }
    }
    cout<<" ";
    for(int i=0;i<str.size();i++)
    {
        if(str[i]!='0')
        cout<<str[i];
    }
    cout<<endl;
}
signed main()
{
    int t;cin>>t;
    while(t--)
    {
        solution();
    }
    return 0;
}