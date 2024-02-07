#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int n;cin >> n;
    int s[n],f[n];
    for(int i=0;i<n;i++){
        cin >> s[i];
    }
    for(int i=0;i<n;i++){
        cin >> f[i];
    }
    bool flag = true;
    for(int i= 0;i<n;i++){
        if(flag){
            cout << f[i] - s[i] << " ";
        }
        else{
            cout << f[i] - f[i-1] << " ";
        }
        if(s[i+1] < f[i]) flag = false;
        else{
            flag = true;
        }
    }
    cout << endl;
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