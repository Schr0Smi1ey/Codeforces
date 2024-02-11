#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"

int spell_check(string &str) {
    int n, count = 0;
    string result = str;
    while(true) {
        if(result.size() == 1)
            return count;
        n = 0;
        count++;
        for(int i = 0; i < result.size(); i++) {
            n += (result[i] - '0');
        }
        result.clear();
        result = to_string(n);
    }
    return count;
}

signed main() {
    fastio;
    string str;
    cin >> str;
    cout << spell_check(str);
    return 0;
}
