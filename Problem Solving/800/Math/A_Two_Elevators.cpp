#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int tempa = (a - 1);
        int tempb = abs((c - b)) + abs((c - 1)); // notice the abs value ...
        if (tempa == tempb)
            puts("3");
        else if (tempa < tempb)
            puts("1");
        else
            puts("2");
    }
    return 0;
}
