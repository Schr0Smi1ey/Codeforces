#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long int
#define int long long int

void solution() {
    int arr[7];
    for (int i = 0; i < 7; i++)
        cin >> arr[i];
    sort(arr, arr + 7);
    cout << arr[0] << " " << arr[1] << " ";
    if (arr[2] == arr[0] + arr[1])
        cout << arr[3] << endl;
    else
        cout << arr[2] << endl;
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
