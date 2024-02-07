#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
void solution()
{
    int n;cin>>n;
    string str;
    cin>>str;
    stack<char> stk;
    for(int i=0;i<n;i++)
    {
        if(!stk.empty() && (str[i]==')' && stk.top()=='('))
        {
            stk.pop();
        }
        else
        {
            stk.push(str[i]);
        }
    }
    cout<<(stk.size()/2)<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        solution();
    }
    return 0;
}