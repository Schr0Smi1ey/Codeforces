#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long int

void solution() {
    int n, t;
    cin >> n >> t;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int ans = 0, sum = 0, right_ptr = 0;
    for (int i = 0; i < n; i++) {
        while (right_ptr < n && sum + arr[right_ptr] <= t) {
            sum += arr[right_ptr];
            right_ptr++;
        }
        ans = max(ans, right_ptr - i);
        sum -= arr[i];
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solution();
    return 0;
}
