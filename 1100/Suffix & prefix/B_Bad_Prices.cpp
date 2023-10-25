#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int n;cin >> n;
    int arr[n];
    int suff[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    suff[n-1] = arr[n-1];
    for(int i=n-2;i>=0;i--){
        suff[i] = min(arr[i],suff[i+1]);
    }
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(arr[i] > suff[i]){
            cnt++;
        }
    }
    cout << cnt << endl;
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