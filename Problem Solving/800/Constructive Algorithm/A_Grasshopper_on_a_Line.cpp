#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long int

void solution() {
    int n, k;
    cin >> n >> k;
    if (n % k != 0) {
        cout << 1 << endl << n << endl;
        return;
    }
    int temp = n;
    while (true) {
        if (n % k != 0) {
            cout << 2 << endl;
            cout << n << " " << temp - n << endl;
            return;
        }
        n--;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solution();
    }
    return 0;
}
