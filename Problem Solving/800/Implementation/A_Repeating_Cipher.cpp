#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    string result;
    int k = 0;
    for (int i = 0; i < str.size();) {
        cout << str[i];
        k++;
        i += k;
    }
    return 0;
}
