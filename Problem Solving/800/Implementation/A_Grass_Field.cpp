#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long int

void solution() {
    int n = 4, count = 0;
    while (n--) {
        int x;
        cin >> x;
        if (x)
            count++;
    }
    if (count == 4)
        cout << 2 << endl;
    else if (count)
        cout << 1 << endl;
    else
        cout << 0 << endl;
}

int main() {
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
