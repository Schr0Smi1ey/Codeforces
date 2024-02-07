#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
#define getbit(n,i) ((n) & (1LL<<(i)))
void solution(){
    int n,x;cin >> n;
    map<int,int> mp;
    vector<int> arr;
    set<int> st;
    for(int i = 0;i<n;i++){
        cin >> x;
        mp[x]++;
        if(st.insert(x).second){
            arr.push_back(x);
        }
    }
    sort(arr.begin(),arr.end(),greater<int>());;
    int result = mp[arr[0]];
    for(int i=1;i<arr.size();i++){
        
        if(arr[i-1] - arr[i] == 1){
            result += max(0LL,(mp[arr[i]] - mp[arr[i-1]]));
        }
        else{
            result += mp[arr[i]];
        }
    }
    cout << result << endl;
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