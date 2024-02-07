#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long int

void solution() {
    int n;
    cin >> n;
    int one = 0, two = 0;
    while (n--) {
        int x;
        cin >> x;
        if (x == 1)
            one++;
        else
            two++;
    }
    if ((one % 2 == 0 && two == 0) || 
        (two % 2 == 0 && one == 0) || 
            ((one - (2 * (two % 2))) % 2 == 0 && 
                one != 0))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
        solution();
    return 0;
}
