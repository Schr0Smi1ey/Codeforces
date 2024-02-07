#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
#define mypower(x,n) ({int _p=1;for(int _i=0;_i<n;_i++){_p*=x;}_p;})
signed main()
{
    fastio;
    int n;cin >> n;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i].first;
        v[i].second = i+1;
    }
    sort(v.rbegin(),v.rend());
    int shot = 0,x = 0;
    for(int i=0;i<n;i++){
        shot += (v[i].first*x) + 1;
        x++;
    }
    cout << shot << endl;
    for(auto x : v){
        cout << x.second << " ";
    }
    return 0;
}