#include<bits/stdc++.h>
using namespace std;
void solution(){
    int n;cin>>n;int x = 2;
    for(int i=0;i<n;i++)
    {
        cout<<x<<" ";
        x+=3;
    }
    cout<<endl;
}
signed main(){
    int t;cin>>t;
    while(t--)
    {
        solution();
    }
    return 0;
}