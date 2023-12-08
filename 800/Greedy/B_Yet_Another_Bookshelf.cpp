#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int n;cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int ans = 0,cnt = 0;
    bool flag = false;
    for(int i=0;i<n;i++){
        if(arr[i] == 1 && flag == false){
            flag = true;
            continue;
        }
        if(flag && arr[i] == 0){
            cnt++;
        }
        if(arr[i] == 1){
            ans += cnt;
            cnt = 0;
        }
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