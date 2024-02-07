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
    string a,b;cin >> a >> b;
    vector<pair<int,int>> aa,bb;
    int i = 1,j = 1;
    char ch = a[0];aa.push_back({ch,1});
    while(i < a.size()){
        if(a[i] == ch){aa.back().second++;i++;continue;}
        ch = a[i];aa.push_back({ch,1});
        i++;
    }
    ch = b[0];bb.push_back({ch,1});
    while(j < b.size()){
        if(b[j] == ch) {bb.back().second++;j++;continue;}
        ch = b[j];bb.push_back({ch,1});
        j++;
    }
    if(aa.size() != bb.size()){
        cout << "NO" << endl;
    }
    else{
        for(int i=0;i<aa.size();i++){
            if(aa[i].first != bb[i].first || aa[i] > bb[i]){
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" <<endl;
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