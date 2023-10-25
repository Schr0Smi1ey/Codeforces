#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int n;cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    string str;cin >> str;
    map<int,char> mp;
    for(int i=0;i<n;i++){
        if(mp.find(arr[i]) != mp.end()){
            if(mp[arr[i]] != str[i]){
                cout << "NO" << endl;
                return;
            }
        }
        else{
            mp[arr[i]] = str[i];
        }
    }
    cout << "YES" << endl;
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