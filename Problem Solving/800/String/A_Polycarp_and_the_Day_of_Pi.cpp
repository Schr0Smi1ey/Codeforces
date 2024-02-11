#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long int

void solution() {
    string fixed = "314159265358979323846264338327";
    string str;
    cin >> str;
    string temp = fixed.substr(0, str.size());
    int count = 0;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == temp[i])
            count++;
        else
            break;
    }
    cout << count << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solution();
    }
    return 0;
}
