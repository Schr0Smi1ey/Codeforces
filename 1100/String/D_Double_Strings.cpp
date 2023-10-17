#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
#define getbit(n,i) ((n) & (1LL<<(i)))
void solution(){
    int n;cin >> n;
    vector<string> v(n);
    map<string,int> mp;
    for(int i=0;i<n;i++){
        cin >> v[i];
        mp[v[i]]++;
    }
    string str = "";
    for(int i=0;i<n;i++){
        string temp1 = "",temp2;
        bool flag = false;
        for(int j=0;j<v[i].size();j++){
            temp1 += v[i][j];
            temp2 = v[i].substr(j+1,v[i].size()-temp1.size());
            if(mp[temp1] && mp[temp2]){
                flag = true;
                break;
            }
        }
        str += flag?'1':'0';
    }
    cout << str << endl;
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