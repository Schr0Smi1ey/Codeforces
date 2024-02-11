#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long int

void solution() {
    int n;
    cin >> n;
    vector<int> first;
    vector<int> second;
    while (n--) {
        int x;
        cin >> x;
        bool flag = true;
        if (second.size() == 0 && (first.size() == 0 || x >= first.back())) {
            first.push_back(x);
        } else if (x <= first[0] && (second.size() == 0 || x >= second.back())) {
            second.push_back(x);
        } else {
            flag = false;
        }
        cout << flag;
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solution();
    }
    return 0;
}
