#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long int

void solution() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    if (str.find("R") == string::npos || str.find("L") == string::npos) { // R or L missing means it's impossible
        cout << -1 << endl;
        return;
    } else {
        if (str.substr(str.find("R")).find("L") != string::npos) {// if there RL (sub-sequences) in the string means it's already illuminated
            cout << 0 << endl;
            return;
        }
    }
    cout << str.find("LR") + 1 << endl; // if any one not satisfied then we have to swap LR and print the position of L
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solution();
    }
    return 0;
}
