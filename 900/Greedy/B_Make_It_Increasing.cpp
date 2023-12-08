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
    int flag = 0;
    for(int i=n-2;i>=0;i--){
        while(arr[i] >= arr[i+1]){
            arr[i] /= 2;
            if(arr[i] == 0 &&  arr[i+1] == 0){
            cout << -1 << endl;
            return;
        }
            flag++;
        }
        if(arr[i] == 0 && i != 0){
            cout << -1 << endl;
            return;
        }
    }
    cout << flag << endl;
}
signed main()
{
    // fastio;
    int t;cin >> t;
    while(t--){
        solution();
    }
    return 0;
}