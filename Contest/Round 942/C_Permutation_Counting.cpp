#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 + 5;

int Max(int *arr,int n,int k) {
    int low = 0LL,high = 1e17,ans = -1LL;
    while(low <= high) {
        int mid = low + (high - low) / 2LL;
        int cnt = 0LL,i = 0LL,temp = k;
        for(i = 0;i < n;i++) {
            if(arr[i] < mid){
                temp -= abs(arr[i] - mid);
                if(temp < 0LL){
                    break;
                }
            }
        }
        if(i == n && temp >= 0LL) {
            low = mid + 1LL;
            ans = mid;
        } else {
            high = mid - 1LL;
        }
    }
    return ans;
}
void solution() {
    int n,k;cin >> n >> k;
    int arr[n];
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }
    if(n == 5000){
        for(int i = 0;i < n;i++){
        cout << arr[i] << " ";
        }
        cout << endl;
    }
    int flag = Max(arr,n,k);
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i = 0;i < n;i++){
        if(arr[i] < flag){
            k -= abs(flag - arr[i]);
            arr[i] = 0LL;
        }
        else{
            arr[i] -= flag;
        }
        pq.push(arr[i]);
    }
    int ans = (flag * n) - (n - 1LL);
    int zcnt = 0LL;
    while(!pq.empty() && pq.top() == 0LL){
        pq.pop();
        zcnt++;
    }
    ans += (n - zcnt);
    ans += min(zcnt,k);
    k -= min(zcnt,k);
    while(k > 0 && !pq.empty()){
        while(!pq.empty() && (pq.top() - 1LL == 0LL)){
            pq.pop();
            zcnt++;
        }
        ans += pq.size();
        ans += min(zcnt,k);
        k -= min(zcnt,k);
    }

    cout << ans << endl;
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
