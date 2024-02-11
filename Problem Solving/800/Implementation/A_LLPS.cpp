#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    string str;
    cin >> str;
    sort(str.begin(), str.end());
    char c = str.back();
    for (auto x : str) {
        if (x == c)
            cout << x;
    }
    return 0;
}
