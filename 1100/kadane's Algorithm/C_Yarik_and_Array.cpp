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

void solution(){
    int n;cin >> n;
    int arr[n+1];
    for(int i=1;i<=n;i++){
        cin >> arr[i];
    }
    if(n == 1){
        cout << arr[1] << endl;return;
    }
    int last = 0,ans = INT_MIN;
    for(int i=1;i<=n;i++){
        if(i == 1) {last = max(arr[i],last + arr[i]);}
        else if(abs(arr[i] % 2) != abs(arr[i-1] % 2)){
            last = max(arr[i],last + arr[i]);
        }
        else
        last = arr[i];
        ans = max(ans,last);
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