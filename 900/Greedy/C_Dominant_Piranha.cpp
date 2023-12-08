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
    int x = *max_element(arr,arr+n);
    for(int i=0;i<n;i++){
        if(arr[i] == x){
            if((i >= 1 && arr[i-1] < arr[i]) || (i<n-1 && arr[i+1] < arr[i])){
                cout << i+1 << endl;
                return ;
            }
        }
    }
    cout << -1 << endl;
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