#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int n,k;cin >> n >> k;
    string str;cin >> str;
    int w = 0,ans = INT_MAX,j = 0;
    for(int i=0;i<n;i++){
        if(str[i] == 'W') w++;
        if(i >= k-1){
            ans = min(ans,w);
            if(str[j++] == 'W')
            w--;
        }
    }
    cout << ans << endl;
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