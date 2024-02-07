#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
signed main()
{
    fastio;
    int n;cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin >> arr[i];
    for(int i=0;i<(1<<n);i++)
    {
        int sum = 0;
        for(int j=0;j<n;j++)
        {
            if(i & (1 << j))
            {
                sum += arr[j];
            }
            else 
            sum -= arr[j];
        }
        if(sum % 360 == 0 || sum == 0)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}