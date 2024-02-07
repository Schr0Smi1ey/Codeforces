// Upsolved
#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int n;cin >> n;
    int arr[n];
    map<int,int> mp;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        mp[arr[i]]++;
    }
    vector<int> v;
    for(auto x : mp){
        v.push_back(x.second);
    }
    if(v.size() > 2){
        cout << "No" << endl;
    }
    else{
        if(v.size() == 1){
            cout << "Yes" << endl;
        }
        else if((v[0] == v[1]) || (v[0] == v[1]-1) || (v[0]-1 == v[1])){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
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