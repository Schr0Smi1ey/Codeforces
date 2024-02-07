#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
#ifdef KARIM
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
const int N = 2e5 +5;
typedef pair<int,int> pii;

void solution(){
    int n;cin >> n;
    vector<int> odd,even;
    for(int i=0;i<n;i++){
        int x;cin >> x;
        if(x & 1){
            odd.push_back(x);
        }
        else{
            even.push_back(x);
        }
    }
    if(is_sorted(odd.begin(),odd.end()) && is_sorted(even.begin(),even.end())){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}

int32_t main(){
    #ifndef KARIM
    fastio;
    #endif
    int t = 1;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}