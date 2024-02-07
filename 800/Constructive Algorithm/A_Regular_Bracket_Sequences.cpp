#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
#define mypower(x, n) ({int p=1;for(int i=0;i<n;i++){p*=x;}p;})
#define getbit(n,i) (((n) & (1LL << (i))) !=0)
void solution()
{
    int n;cin>>n;int temp = n,k=n;
    while(temp--)
    {
        int flag = n;
        for(int i=0;i<k;i++)
        cout<<'(';
        for(int i=0;i<k;i++)
        cout<<')';
        flag = n-k;
        k--;
        for(int i=0;i<flag;i++)
        {
            cout<<"()";
        }
        cout<<endl;
    }
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