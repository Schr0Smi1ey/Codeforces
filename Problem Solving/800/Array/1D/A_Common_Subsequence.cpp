#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
void solution(){
    int n,m;cin >> n >> m;
    int a[n],b[m];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<m;i++){
        cin >> b[i];
    }
    sort(a,a+n);sort(b,b+m);
    int i=0,j=0;
    while(i < n && j < m){
        if(a[i] > b[j]){
            j++;
        }
        else if(a[i] < b[j]){
            i++;
        }
        else{
            cout << "YES" << endl;
            cout << 1 << " " << a[i] << endl;
            return ;
        }
    }
    cout << "NO" << endl;
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