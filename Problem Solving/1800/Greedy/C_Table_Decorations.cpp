#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
signed main()
{
    fastio;
    int arr[3];cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr,arr+3);
    cout << min(arr[0]+arr[1],(arr[0]+arr[1]+arr[2])/3);
    return 0;
}