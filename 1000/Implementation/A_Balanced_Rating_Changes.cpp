#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
signed main()
{
    fastio;
    int n;cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    bool flag = true;
    for(int i=0;i<n;i++){
        if(arr[i]&1){
            if(flag){
                if(arr[i] < 0){
                    cout << (arr[i]/2)-1 << endl; // lower half
                }
                else {
                    cout << (arr[i]/2) << endl; // lower half
                }
                flag = false;
            }
            else{
                if(arr[i] < 0){
                    cout << (arr[i]/2)<< endl; // upper half
                }
                else {
                    cout << (arr[i]/2) + 1 << endl; // upper half
                }
                flag = true;
            }
        }
        else{
            cout << arr[i]/2 << endl;
        }
    }
    return 0;
}