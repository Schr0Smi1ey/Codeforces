#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int n;cin >> n;
    int arr[n],fre[8000+10] = {0};
    for(int i=0;i<n;i++){
        cin >> arr[i];
        fre[arr[i]]++;
    }
    int cnt = 0;
    for(int i=0;i<n;i++){
        int sum = arr[i];
        for(int j = i+1;j<n;j++){
            sum += arr[j];
            if(sum <= n){
                cnt += fre[sum];
                fre[sum] = 0;
            }
            else 
            break;
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