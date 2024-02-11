#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int count = 0;
    while (n) { // count of set bits will be the number of added bacteria
        n = n & (n - 1);
        count++;
    }
    cout << count << endl;

    return 0;
}
