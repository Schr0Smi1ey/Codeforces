#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define int long long int
#define getbit(n,i) (((n) & (1LL << (i))) !=0)
void solution()
{
    int n;cin>>n;
    int arr[n];
    set<int> st;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        st.insert(arr[i]);
    }
    cout<<st.size()-(n-st.size())%2<<endl;
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