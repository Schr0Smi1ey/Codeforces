#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int n;cin >> n;
    int arr[n];
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        mp[arr[i]]++;
    }
    set<int> st;
    for(auto x : mp){
        st.insert(x.second);
    }
    int ans = INT_MAX;
    for(auto x : st){
        int temp = 0;
        for(auto c : mp){
            if(c.second < x) temp += c.second;
            else{
                temp += c.second - x;
            }
        }
        ans = min(ans,temp);
    }
    cout << ans << endl;
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