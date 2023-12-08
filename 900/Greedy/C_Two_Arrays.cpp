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
    for(int j=0;j<n;j++){
        cin >> b[j];
    }
    sort(a,a+n);sort(b,b+n);
    for(int i=0;i<n;i++){
        if(a[i] == b[i]) continue;
        if(a[i] + 1 != b[i]){
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