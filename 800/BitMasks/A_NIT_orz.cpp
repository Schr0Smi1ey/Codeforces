#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution()
{
    int n,z;cin >> n >> z;int arr[n];
    int maxima = 0;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        maxima = max(arr[i] | z,maxima);
    }
    cout << maxima << endl;
}
signed main()
{
    fastio;
    int t;cin >> t;
    while(t--)
    {
        solution();
    }
    return 0;
}