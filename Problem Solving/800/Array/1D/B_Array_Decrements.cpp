#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int n;cin >> n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        cin >> b[i];
    }
    int flag = INT_MIN;
    for(int i=0;i<n;i++){
        flag = max(flag,a[i]-b[i]);
            if(a[i] - b[i] < 0 && b[i] != 0){
                cout << "NO" << endl;
                return;
            }
    }
    for(int i=0;i<n;i++){
        if((a[i] - flag < 0 || a[i] - b[i] != flag) && b[i] != 0 ){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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