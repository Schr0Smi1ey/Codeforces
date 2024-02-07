#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int

void solution() {
    int n;
    cin >> n;
    int up = 0;
    while (n--) {
        int x;
        cin >> x;
        if (x == 1 || x == 3)
            up++;
    }
    cout << up << endl;
}

signed main() {
    int t;
    cin >> t;
    while (t--) {
        solution();
    }
    return 0;
}
