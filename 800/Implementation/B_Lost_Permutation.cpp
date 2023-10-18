#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int n,s;cin >> n >> s;
    int arr[n],total = 0;
    vector<bool> v(500,false);
    for(int i=0;i<n;i++){
        cin >> arr[i];
        total += arr[i];
        v[arr[i]] = true;
    }
    int sum = 0,index = 0;
    for(int i=1;i<=500;i++){
        if(v[i]) continue;
        sum += i;
        v[i] = true;
        if(sum == s){
            index = i;
            break;
        }
    }
    if(index == 0){
        cout << "NO" << endl;
        return;
    }
    for(int i=1;i<max(*max_element(arr,arr+n),index);i++){
        if(v[i]) continue;
        cout << "NO" << endl;
        return;
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