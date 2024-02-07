#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int x, y, a, b;
        cin >> x >> y >> a >> b;
        long long int sum = 0;
        long int large = max(x, y);
        long int low = min(x, y);
        long int flag = large - low;
        if ((a * 2) > b) {
            sum = (low * b) + (flag * a);
        } else {
            sum = ((x + y) * a);
        }
        cout << sum << endl;
    }
    return 0;
}
