#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int n;cin >> n;
    string str;cin >> str;
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(i <= n-3 && str[i] == '.' && str[i+1] == '.' && str[i+2] == '.'){
            cout << 2 << endl;
            return;
        }
        if(str[i] == '.') cnt++;
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