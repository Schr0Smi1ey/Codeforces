#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int

void solution() {
    string str;
    cin >> str;
    int arr[26] = {0};
    for (int i = 0; i < str.size(); i++) {
        arr[str[i] - 'a']++;
    }
    int distinct = 0, multiple = 0;
    for (int i = 0; i < 26; i++) {
        if (arr[i] == 0) continue;
        if (arr[i] == 1)
            distinct++;
        else
            multiple++;
    }
    cout << (distinct / 2) + multiple << endl;
}

signed main() {
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
