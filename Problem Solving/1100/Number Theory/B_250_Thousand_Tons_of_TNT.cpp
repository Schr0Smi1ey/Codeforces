#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
#ifdef KARIM
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
const int N = 2e5 +5;
typedef pair<int,int> pii;
void getDivisors(vector<int>&divisor,int n){
    for(int i=1;i*i <= n;i++){
        if(n % i == 0){
            divisor.push_back(i);
            if(i != n/i)
            divisor.push_back(n/i);
        }
    }
}
void solution(){
    int n;cin >> n;
    int arr[n+1];
    arr[0] = 0;
    for(int i=1;i<=n;i++){
        cin >> arr[i];
        if(i>1) arr[i] += arr[i-1];
    }
    vector<int> divisor;
    getDivisors(divisor,n);
    int ans = INT_MIN;
    for(int i=0;i<divisor.size();i++){
        int x = divisor[i];int low = 1e18,high = INT_MIN;
        for(int j = x;j <= n; j += x){
            low = min(low,arr[j] - arr[j-x]);
            high = max(high,arr[j] - arr[j-x]);
        }
        ans = max(ans,high - low);
    }
    cout << ans << endl;
}

int32_t main(){
    #ifndef KARIM
    fastio;
    #endif
    int t = 1;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}