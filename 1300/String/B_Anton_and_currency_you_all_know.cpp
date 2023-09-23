#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
signed main()
{
    fastio;
    string str;cin >> str;
    priority_queue<int> pq;
    for(int i=0;i<str.size();i++){
        if((str[i]-'0')%2 == 0){
            pq.push(i);
        }
    }   
    if(pq.size() == 0){
        cout << -1;
    }
    else{
        for(int i=0;i<str.size();i++){
            if(str[i] < str.back() && ((str[i] -'0') % 2 == 0)){
                swap(str[i],str.back());
                cout << str ;
                return 0;
            }
        }
        swap(str.back(),str[pq.top()]);
        cout << str;
    }
    return 0;
}