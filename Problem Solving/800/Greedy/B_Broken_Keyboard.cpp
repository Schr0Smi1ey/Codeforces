#include<bits/stdc++.h>
using namespace std;

// Broken Keyboard
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string str;
        cin >> str;
        bool flag = false;
        for (int i = 0; i < str.size(); i += 3) {
            if (i == str.size() - 1)
                break;
            if ((str[i + 1] != str[i + 2] && i < str.size())) {
                flag = true;
                break;
            }
        }
        puts(flag ? "NO" : "YES");
    }
    return 0;
}
