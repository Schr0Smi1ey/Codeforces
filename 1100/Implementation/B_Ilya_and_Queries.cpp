#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
signed main()
{
    fastio;
    string str;cin >> str;
    vector<int> v(str.size()+1,0);
    for(int i=1;i<str.size();i++){
        if(str[i] == str[i-1]){
            v[i+1]++;
        }
    }
    for(int i=1;i<v.size();i++){
        v[i] += v[i-1];
    }
    int q ,l ,r ;cin >> q;
    while(q--){
        cin >> l >> r;
        cout << v[r] - v[l] << endl;
    }
    return 0;
}