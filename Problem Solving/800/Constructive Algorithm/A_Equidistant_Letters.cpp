#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
void solution()
{
    string str;
    cin>>str;
    sort(str.begin(),str.end());
    cout<<str<<endl;
}
signed main()
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