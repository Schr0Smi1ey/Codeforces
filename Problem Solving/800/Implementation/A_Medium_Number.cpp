#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
void solution()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<a+b+c-max({a,b,c})-min({a,b,c})<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        solution();
    }
    return 0;
}