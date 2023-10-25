#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int n;cin >> n;
    if(n == 3){
        cout << -1 << endl;
        return ;
    }
    int k = 1;
    while(true){
        cout << n-- << " ";
        k++;
        if(n == k || n == 0){
            break;
        }
    }
    for(int i=1;i<=n;i++){
        cout << i << " ";
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