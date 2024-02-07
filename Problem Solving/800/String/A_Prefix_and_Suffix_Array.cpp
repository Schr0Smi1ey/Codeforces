#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int n;cin >> n;
    int x = 2*n - 2;
    string str;
    vector<string> v;
    for(int i=0;i<x;i++){
        cin >> str;
        if(str.size() == n-1){
            v.push_back(str);
        }
    }
    if(v[0] == string(v[1].rbegin(),v[1].rend())){
        puts("YES");
    }
    else{
        puts("NO");
    }
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