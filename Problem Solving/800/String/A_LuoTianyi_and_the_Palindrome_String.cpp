#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int

void solution() {
    string str;
    cin >> str;
    bool flag = true;
    for (int i = 1; i < str.size(); i++) {
        if (str[i] != str[i - 1])
            flag = false;
    }
    if (str.size() == 1 || flag)
        cout << -1 << endl;
    else
        cout << str.size() - 1 << endl;
}

signed main() {
    int t;
    cin >> t;
    while (t--) {
        solution();
    }
    return 0;
}
