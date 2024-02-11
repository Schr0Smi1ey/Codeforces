#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define endl "\n"
#define int long long int

/*
    x, y, z ---> y will never be equal to the mean of x and z if x > y && z > y
*/
void solution() {
    int n;
    cin >> n;
    n = 2 * n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    for (int i = 0; i < (n / 2); i += 1) {
        cout << v[n - i - 1] << " " << v[i] << " ";
    }
    cout << endl;
}

signed main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        solution();
    }
    return 0;
}
