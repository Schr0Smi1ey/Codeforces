#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
#define mypower(x,n) ({int _p=1;for(int _i=0;_i<n;_i++){_p*=x;}_p;})
void solution(){
    int n,q;cin >> n >> q;
    int arr[n];
    map<int,int> first,last;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(first[arr[i]] > 0){
            last[arr[i]] = i+1;
            continue;
        }
        first[arr[i]] = i + 1;
    }
    while(q--){
        int a,b;cin >> a >> b;
        if(first[a] >0 && first[b] > 0 && first[a] < first[b]){
            cout << "YES" << endl;
        }
        else if(first[a] > 0 && last[b] > 0 && first[a] < last[b]){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
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