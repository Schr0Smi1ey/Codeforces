#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long int

void solution() {
    int n;
    cin >> n;
    int temp, ans = 0;
    int fre[2 * n + 5] = {0};
    int sum = 1, p = -1;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        if (temp == p)
            sum++;
        else
            sum = 1;
        fre[temp] = max(fre[temp], sum);
        p = temp;
    }
    sum = 1;
    p = -1;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        if (temp == p)
            sum++;
        else 
            sum = 1;
        ans = max(ans, sum + fre[temp]);
        p = temp;
    }
    sort(fre, fre + (2 * n + 5), greater<int>());
    for (int i = 0; i <= 2 * n; i++) {
        ans = max(ans, fre[i]);
        if (fre[i] == 0) {
            cout << ans << endl;
            return;
        }
    }
    return;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solution();
    }
    return 0;
}
