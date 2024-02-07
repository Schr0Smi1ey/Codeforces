#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
#define getbit(n,i) ((n) & (1LL<<(i)))
bool cmp(string a,string b){
    return a.size() < b.size();
}
signed main()
{
    fastio;
    int n;cin >> n;
    vector<string> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<n-1;i++){
        if(v[i+1].find(v[i]) == string::npos){
            cout << "NO" ;
            return 0;
        }
    }
    cout << "YES" << endl;
    for(int i=0;i<n;i++){
        cout << v[i] << endl;
    }

    return 0;
}