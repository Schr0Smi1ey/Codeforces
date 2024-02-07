#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
#define mypower(x, n) ({int p=1;for(int i=0;i<n;i++){p*=x;}p;})
#define getbit(n,i) (((n) & (1LL << (i))) !=0)
void solution()
{
    int n,q;
    cin>>n>>q;
    string str;cin>>str;
    int arr[n+1];
    arr[0]=0;int k =1;
    for(int i=0;i<n;i++)
    {
        arr[k] = arr[k-1]+(str[i]-'a'+1);
        k++;
    }
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        cout<<arr[r]-arr[--l]<<endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solution();
    return 0;
}