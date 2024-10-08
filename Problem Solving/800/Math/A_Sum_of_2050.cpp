#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int

void solution() {
    int n;
    cin >> n;
    if (n % 2050 == 0) {
        int c = 0;
        n /= 2050;
        while (n) {
            c += n % 10;
            n /= 10;
        }   
        cout << c << endl;
    } else {
        cout << -1 << endl;
    }
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
