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
    int n;cin >> n;
    vector<int> a(n+1),b(n+1);
    a[0] = 0;b[0] = 0;
    for(int i=1;i<=n;i++){
        cin >> a[i];
        b[i] = a[i];
        if(i>0){
            a[i] += a[i-1];
        }
    }
    sort(b.begin(),b.end());
    for(int i=1;i<=n;i++){
        b[i] += b[i-1];
    }
    int q;cin >> q;
    while(q--){
        int type,l,r;cin >> type >> l >> r;
        if(type == 1){
            cout << (a[r] - a[--l]) << endl;
        }
        else{
            cout << (b[r] - b[--l]) << endl;
        }
    }
    return 0;
}