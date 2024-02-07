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
int cnt(int *arr,int n ,int target){
    map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    int pair = 0;
    for(int i=0;i<n;i++){
        int need = target - arr[i];
        if(!mp[arr[i]]) continue;
        mp[arr[i]]--;
        for(int j = i+1;j<n;j++){
            if(arr[j] == need && mp[arr[j]]){
                pair++;
                mp[arr[j]]--;
                break;
            }
        }
    }
    return pair;
}
void solution(){
    int n;cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    int maxSum = (2*arr[n-1]);
    int ans = 0;
    for(int i=1;i<=maxSum;i++){
        ans = max(ans,cnt(arr,n,i));
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