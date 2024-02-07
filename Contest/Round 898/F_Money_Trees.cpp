#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
// TLE
void solution(){
    int n,k;cin >> n >> k;
    int arr[n],fruit[n];
    for(int i=0;i<n;i++){
        cin >> fruit[i];
    }
        for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int ans = 0,j = 0,temp = 0;
    for(int i=0;i<n;i++){ // NEED To optimize this solution 
        int l = 0;
        j = i;
        if(fruit[i] <= k){
            l++;
            while(j<n-1 && arr[j] % arr[j+1] == 0 && temp+fruit[j] <= k){
                temp += fruit[j];
                if(temp + fruit[j+1] > k)break;
                l++;
                j++;
            }
        }
        if(arr[j] % arr[j+1])
        temp -= arr[i];
        else
        temp = 0;
        j = i;
        ans = max(ans,l);
    }
    cout << ans << endl;
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

// UPSOLVING --- > Loop Optimized
#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
void solution(){
    int n,k;cin >> n >> k;
    int arr[n+1],fruit[n+1];
    arr[0] = 0,fruit[0] = 0;
    for(int i=1;i<=n;i++){
        cin >> fruit[i];
    }
    for(int i=1;i<=n;i++){
        cin >> arr[i];
    }
    int ans = 0,sum = 0;
    for(int l = 1,r=1;r<=n;r++){ // modified kadane's algorithm
        if(arr[r-1] % arr[r] == 0){
            sum += fruit[r];
        }
        else{
            sum = fruit[r];
            l = r;
        }
        while(sum > k){
            sum -= fruit[l++];
        }
        ans = max(ans,r-l+1);
    }
    cout << ans << endl;
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