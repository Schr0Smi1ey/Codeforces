#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
#define getbit(n,i) ((n) & (1LL<<(i)))
signed main()
{
    fastio;
    int t;cin >> t;
    string fixed = "314159265358979323846264338327";
    while(t--){
        string str;cin >> str;
        int cnt = 0;
        for(int i=0;i<str.size();i++){
            if(str[i] == fixed[i]){
                cnt++;
            }
            else
            break;
        }
        cout << cnt << endl;
    }
    return 0;
}