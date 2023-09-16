#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution()
{
    int n,k;cin >> n >> k;
    int arr[k];
    for(int i=0;i<k;i++)
    {
        cin >> arr[i];
    }
    if(k == 1)
    {
        cout << "Yes" << endl;
        return;
    }
    int flag = arr[0]/(n - k + 1);
    if(arr[0] % (n-k+1))
    flag += (arr[0]>0)?1:0;
    for(int i = 1 ;i < k;i++)
    {
        if(arr[i] - arr[i-1] < flag)
        {
            cout << "No" << endl;
            return ;
        }
        flag = arr[i] - arr[i-1];
    }
    cout << "Yes" << endl;
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