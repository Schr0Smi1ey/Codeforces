#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long int

void solution() {
    int n;
    cin >> n;
    int x, one = 0, other = 0;
    while (n--) {
        cin >> x;
        if (x == 1)
            one++;
        else 
            other++;
    }
    cout << (other + one / 2 + one % 2) << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solution();
    }
    return 0;
}
