#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
#define getbit(n,i) ((n) & (1LL<<(i)))
signed main()
{
    fastio;
    int n;cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int cnt = 0;
    for(int i=1;i<n-1;i++){
        if(arr[i] == 0 && arr[i-1] == 1 && arr[i+1] == 1){
            cnt++;
            arr[i+1] = 0;
        }
    }
    cout << cnt;
    return 0;
}