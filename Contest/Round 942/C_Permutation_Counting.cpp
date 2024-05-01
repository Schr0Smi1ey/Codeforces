#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 + 5;

int Search(int *arr,int n,int k) {
    int low = 0,high = 1e17,ans = -1;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        int cnt = 0,i = 0,temp = k;
        for(i = 0;i < n;i++) {
            if(arr[i] < mid){
                temp -= abs(arr[i] - mid);
                if(temp < 0){
                    break;
                }
            }
        }
        if(i == n && temp >= 0) {
            low = mid + 1;
            ans = mid;
        } else {
            high = mid - 1;
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
    int flag = Search(arr,n,k);
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i = 0;i < n;i++){
        if(arr[i] < flag){
            k -= abs(flag - arr[i]);
            arr[i] = 0;
        }
        else{
            arr[i] -= flag;
        }
        pq.push(arr[i]);
    }
    int ans = (flag * n) - (n - 1);
    int zcnt = 0;
    while(!pq.empty() && pq.top() == 0){
        pq.pop();
        zcnt++;
    }
    ans += (n - zcnt);
    ans += min(zcnt,k);
    k -= min(zcnt,k);
    while(k > 0 && !pq.empty()){
        while(!pq.empty() && (pq.top() - 1 == 0)){
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
