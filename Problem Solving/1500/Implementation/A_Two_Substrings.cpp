#include <bits/stdc++.h>
using namespace std;

int main() {
    char str[100001], *p;
    cin >> str;
    if ((p = strstr(str, "AB")) && strstr(p + 2, "BA")) // think simply and simply
        cout << "YES";
    else if ((p = strstr(str, "BA")) && strstr(p + 2, "AB"))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
