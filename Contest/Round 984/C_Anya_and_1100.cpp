#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int
#define trace(x) cout << #x << " : " << x << endl;
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 + 5;

void solution() {
    string str;cin >> str;
    set<int> st;
    if(str.size() >= 4) {
        for(int i = 0;i <= str.size() - 4; i++) {
            string temp = str.substr(i, 4);
            if(temp == "1100") {
                st.insert(i);
            }
        }
    }
    int q;cin >> q;
    while(q--) {
        int i;
        char v;
        cin >> i >> v;
        i--;
        if(str.size() < 3) {
            cout << "NO" << endl;
            continue;
        }
        if(str[i] != v) {
            str[i] = v;
            for (int j = 0;j < 4; j++) {
                int x = i - j;
                if(x < 0) {
                    continue;
                }
                if(st.find(x) != st.end()) {
                    if((j == 0 || j == 1) && str[i] == '0') {
                        st.erase(x);
                    }
                    else if((j == 2 || j ==3) && str[i] == '1') {
                        st.erase(x);
                    }
                }
            }
            for(int j = max(0LL, i - 3); j <= min((int)str.size() - 4, i + 3); j++) {
                string temp = str.substr(j, 4);
                if(temp == "1100") {
                    st.insert(j);
                }
            }
            
        }
        if(st.size()) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}

int32_t main() {
    fastio;
    int t = 1;
    cin >> t;
    while(t--) {
        solution();
    }
    return 0;
}





