#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
// int search(int n,int *arr,int x){
//     int low = 0,high = 2e9 + 5,ans = 0;
//     while(low <=high){
//         int mid = low + (high-low)/2;
//         int sum = 0;
//         for(int i=0;i<n;i++){
//             sum += (mid-arr[i]);
//             if(sum > x)
//             break;
//         }
//         if(sum < x){
//             ans = mid;
//             low = mid + 1;
//         }
//         else if(sum > x){
//             high = mid - 1;
//         }
//         else{
//             return mid;
//         }
//     }
//     return ans;
// }
int search(int n, int *arr, int x){
    int low = 0, high = INT_MAX, ans = 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += max(0LL, mid - arr[i]); 
            if(sum > x)
            break;
        }
        if (sum <= x) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

void solution(){
    int n,x;cin >> n >> x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << search(n,arr,x) << endl;
}
signed main()
{
    fastio;
    int t;cin >> t;
    while(t--){
        solution();
    }
    return 0;
}