#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long int

void solution() {
    int n;
    cin >> n;
    int arr[n];
    bool flag = false;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    if (arr[0] == arr[n - 1]) {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    cout << arr[0] << " " << arr[n - 1] << " ";
    for (int i = 0; i < n; i++) {
        if (i == 0 || i == n - 1)
            continue;
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solution();
    }
    return 0;
}
