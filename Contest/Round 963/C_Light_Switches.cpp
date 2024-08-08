#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 + 5;

void solution() {
    int n,k;cin >> n >> k;
    int arr[n];
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    for(int i = 0;i < n - 1;i++){
        int x =  (arr[n-1] - arr[i])/k;
        if(x & 1)
            x++;
        arr[i] = arr[i] + x*k; 
    }
    sort(arr,arr+n);
    if(arr[n-1] - arr[0] >= k) 
        cout << -1 << endl;
    else 
        cout << arr[n-1] << endl; 
}

int32_t main() {
    fastio;
    int t = 1;
    cin >> t;
    while(t--) {
        solution();
    }
    return 0;
}
