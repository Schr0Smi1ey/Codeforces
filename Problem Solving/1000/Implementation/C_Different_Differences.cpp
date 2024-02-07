#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int k,n;cin >> k >> n;
    vector<int> v(k);
    int x = 1;
    v.push_back(n);
    x++;n--;k--;
    while(k--){
        if(n - x >= k){
            v.push_back(n);
            n-=x;
            x++;
        }
        else{
            v.push_back(n);
            n--;
        }
    }
    reverse(v.begin(),v.end());
    for(auto x : v){
        if(x)
        cout << x << " ";
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