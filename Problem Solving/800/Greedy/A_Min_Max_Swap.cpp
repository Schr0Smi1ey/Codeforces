#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int

void solution() {
    int n;
    cin >> n;
    int a[n], b[n];
    for (auto &x : a)
        cin >> x;
    for (auto &x : b)
        cin >> x;
    for (int i = 0; i < n; i++) {
        if (a[i] < b[i])
            swap(a[i], b[i]);
    }
    sort(a, a + n);
    sort(b, b + n);
    cout << a[n - 1] * b[n - 1] << endl;
}

signed main() {
    int t;
    cin >> t;
    while (t--) {
        solution();
    }
    return 0;
}
