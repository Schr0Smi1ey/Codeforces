#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
void solution()
{
    string str,result;
    cin>>str;
    for(int i=0;i<str.size();i+=2)
    {
        result+=str[i];
    }
    result+=str.back();
    cout<<result<<endl;
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