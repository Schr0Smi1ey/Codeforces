#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 + 5;

void solution() {
    int n,m;cin >> n >> m;
    int sum = 0;
    int arr[n];
    for(int i = 0;i < n;i++) cin >> arr[i];
    sort(arr,arr + n);
    for(int i = 0;i < n;i++){
        if(m > 0 && arr[i] < 0){
            if(arr[i] < 0){
                sum += abs(arr[i]);
                m--;
            }
        }
    }
    cout << sum;
}

int32_t main() {
    fastio;
    int t = 1;
    // cin >> t;
    while(t--) {
        solution();
    }
    return 0;
}
