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
    int arr[n];
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }
    int x,a,y,b,k;cin >> x >> a >> y >> b >> k;
    sort(arr,arr + n,greater<int>());
    int lcm = (a * b)/__gcd(a,b);

    int low = 0,high = n,ans = -1;
    while(low <= high){
        int brr[n] = {0},index = 0,cash = 0;
        int mid = (low + high) / 2;
        for(int j = lcm - 1;index < mid && j < mid;index++,j += lcm){
            brr[j] = (arr[index] * (x+y))/100;
            cash += brr[j];
        }
        if(x < y){
            swap(x,y);
            swap(a,b);
        }
        for(int j = a - 1;j < mid;j += a){
            if(brr[j] == 0){
                brr[j] = (arr[index] * x) / 100;
                index++;
                cash += brr[j];
            }
        }
        for(int j = b - 1;j < mid;j += b){
            if(brr[j] == 0){
                brr[j] = (arr[index] * y) / 100;
                index++;
                cash += brr[j];
            }
        }
        if(cash >= k){
            high = mid - 1;
            ans = mid;
        }
        else 
            low = mid + 1;
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
