#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long int

void solution() {
    int n;
    cin >> n;
    int arr[n];
    int xor_sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        xor_sum ^= arr[i];
    }
    if (xor_sum == 0) {
        cout << arr[0] << endl;
    } else {
        cout << -1 << endl; // No such element exists
    }
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
