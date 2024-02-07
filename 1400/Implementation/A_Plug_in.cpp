#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
int main()
{
    string str;
    cin>>str;
    stack<char> stk;
    string result;
    stk.push(str[0]);
    for(int i=1;i<str.size();i++)
    {
        if(!stk.empty() && str[i]==stk.top()) // here the condition (!stk.empty) must ensure this
        stk.pop();
        else
        stk.push(str[i]);
    }
    int i=0;
    while(!stk.empty())
    {
        result+=stk.top();
        stk.pop();
    }
    reverse(result.begin(),result.end());
    for(auto x:result)
    {
        cout<<x;
    }
    return 0;
}