#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    string str;cin >> str;
    set<char> st;
    int cnt = 0;
    for(int i=0;i<str.size();i++){
        st.insert(str[i]);
        if(st.size() == 3){
            while(true){
                if(!st.insert(str[i+1]).second){
                    i++;
                    continue;
                }
                break;
            }
            cnt++;
            st.clear();
        }
    }
    if(st.size()) cnt++;
    cout << cnt << endl;
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