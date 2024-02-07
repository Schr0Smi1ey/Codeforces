#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
void solution(){
    int n,k;cin >> n >>k;
    string str;cin >> str;
    int i=0,cnt = 0;
    while(i<=n-k){
        int temp = k;
        if(str[i] == 'B'){
            while(temp--){
                str[i++] = 'W';
            }
            cnt++;
        }
        else
        i++;
    }
    for(int i=n-1;i>= n-k;i--){
        if(str[i] == 'B'){
            cnt++;
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