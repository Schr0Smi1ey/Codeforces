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
typedef pair<int,int> pii;
const int MOD = 1e9 + 7;
const int INF = 1e18;
const int N = 2e5 +5;

void solution(){
    int n;cin >> n;
    int arr[n];int z = 0,o = 0,one = 0,zero = 0;
    bool ze = true,on = true;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i] == 0 && ze) {ze = false;one = o;}
        if(arr[i] == 1) o++;
        else z++;
    }
    int cnt = 0,temp = 0;
    for(int i=n-1;i>=0;i--){
        if(arr[i] == 0) temp++;
        else {
            if(on){on = false;zero = temp;}
            cnt+= temp;
        }
    }
    cout << max({cnt,cnt-one+z-1,cnt-zero+o-1}) << endl;
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