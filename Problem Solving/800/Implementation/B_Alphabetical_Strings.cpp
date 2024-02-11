#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int0)

void solution() {
    string str;
    cin >> str;
    int index = str.find("a");
    if (index == string::npos) {
        cout << "NO" << endl;
        return;
    }
    char c = 'a';
    int i = index - 1, j = index + 1;
    while (i >= 0 && j < str.size()) {
        c++;
        if (str[i] == c)
            i--;
        else if (str[j] == c)
            j++;
        else {
            cout << "NO" << endl;
            return;
        }
    }
    while (i >= 0) {
        c++;
        if (str[i] != c) {
            cout << "NO" << endl;
            return;
        }
        i--;
    }
    while (j < str.size()) {
        c++;
        if (str[j] != c) {
            cout << "NO" << endl;
            return;
        }
        j++;
    }
    cout << "YES" << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solution();
    }
    return 0;
}
