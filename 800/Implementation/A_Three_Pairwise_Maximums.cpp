#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
void solution()
{
    vector<int> a(3);
    for(auto &x:a)
    cin>>x;
    sort(a.begin(),a.end());
    if(a[1]!=a[2])
    cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        cout<<a[0]<<" "<<a[0]<<" "<<a[1]<<endl;
    }

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