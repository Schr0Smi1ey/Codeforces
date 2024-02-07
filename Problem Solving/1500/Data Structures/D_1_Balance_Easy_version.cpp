#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
signed main()
{
    fastio;
    int n;cin >> n;
    map<int,int> mex;
    map<int,bool> visited;
    while(n--){
        char ch;int x;cin >> ch >> x;
        if(ch == '+'){
            visited[x] = true;
        }
        else{
            int k = mex[x] + x;
            while(visited[k]){
                mex[x] = k;
                k += x;
            }
            cout << k << endl;
        }
    }
    return 0;
}