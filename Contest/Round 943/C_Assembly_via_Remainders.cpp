#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 + 5;

void solution() {
    int n;cin >> n;
    int arr[n-1];
    for(int i = 0;i < (n -1);i++){
        cin >> arr[i];
    }
    if(n == 2){
        cout << arr[0] + 1 << ' ' << arr[0] << endl;
        return ;
    }
    deque<int> dq;
    int maxima = *max_element(arr,arr+n-1);
    dq.push_back(arr[0]+1);
    int temp = dq[0] + arr[0];
    while(( temp) <= maxima){
        temp += dq[0];
    }
    dq.push_back(temp);
    for(int i = 2;i < n;i++){
        dq.push_back(dq[i-1] + arr[i-1]);
    }
    for(auto x : dq){
        cout << x << " ";
    }
    cout << endl;
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
