#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long int

void solution() {
    int n;
    cin >> n;
    int x;
    int moves = 0;
    while (n--) { // for n number of moves will be (n-1)
        cin >> x;
        moves += --x;
    }
    if (moves & 1)
        cout << "errorgorn" << endl;
    else 
        cout << "maomao90" << endl;
}

int main() {
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
