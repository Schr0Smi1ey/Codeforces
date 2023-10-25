#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
#define mypower(x,n) ({int _p=1;for(int _i=0;_i<n;_i++){_p*=x;}_p;})
signed main()
{
    fastio;
    int n,k,x;cin >> n >> k;
    deque<int> dq;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        cin >> x;
        if(dq.size() < k){
            if(!mp[x])
            dq.push_front(x);
        }
        else{
            if(!mp[x]){
                mp.erase(dq.back());
                dq.pop_back();
                dq.push_front(x);
            }
        }
        mp[x]++;
    }
    cout << dq.size() << endl;
    for(auto x : dq){
        cout << x << " ";
    }
    return 0;
}