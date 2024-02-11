#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long int

void solution() {
    string str;
    cin >> str;
    string temp = str.substr(0, str.size() / 2);
    sort(temp.begin(), temp.end());
    puts((temp.front() == temp.back()) ? "NO" : "YES");
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solution();
    }
    return 0;
}
