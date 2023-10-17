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
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    set<int> st;
    vector<int> v;
    int mx = *max_element(arr,arr+n);
    for(int i=0;i<n;i++){
        if(mx % arr[i] == 0 && st.insert(arr[i]).second){
            st.insert(arr[i]);
        }
        else{
            v.push_back(arr[i]);
        }
    } 
    cout << mx << " " << *max_element(v.begin(),v.end());
    return 0;
}