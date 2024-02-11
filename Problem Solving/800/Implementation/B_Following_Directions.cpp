#include<bits/stdc++.h>
using namespace std;

// Following Directions
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        getchar();
        char str[n + 1];
        cin.getline(str, n + 1);
        int x = 0, y = 0, flag = 0;
        for (int i = 0; i < strlen(str); i++) {
            if (str[i] == 'R')
                x++;
            else if (str[i] == 'L')
                x--;
            else if (str[i] == 'U')
                y++;
            else
                y--;
            if (x == 1 && y == 1) {
                flag++;
                break;
            }
        }
        puts(flag == 1 ? "YES" : "NO");
    }
    return 0;
}
