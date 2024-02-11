#include<bits/stdc++.h>
using namespace std;

// Fix You
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, count = 0;
        cin >> n >> m;
        char str[n][m + 1];
        for (int i = 0; i < n; i++) {
            cin >> str[i];
        }
        for (int i = 0; i < n; i++) {
            if (str[i][m - 1] == 'R') { // Will fix all the R->D in the last column
                count++;
            }
        }
        for (int i = 0; i < m; i++) {
            if (str[n - 1][i] == 'D') { // Will fix all the D->R in the last row
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
