#include <bits/stdc++.h>
using namespace std;
#ifndef ONLINE_JUDGE
// #include "debug_template.hpp" 
#else
#define debug(...)
#define debugArr(arr, N)
#define trace(x)
#endif
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl "\n"
#define int long long int
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 16;

void precompute(vector<vector<int>> &arr) {
    arr[0] = {0}; 
    for (int i = 1; i <= N; i++) {
        vector<int> v;
        for (int x : arr[i - 1])
            v.push_back(x * 2 + 1);
        for (int x = 0; x < (1LL << i); x += 2)
            v.push_back(x);
        arr[i] = v;
    }
}
void solution(vector<vector<int>> &arr) {
    int n; cin >> n;
    for(auto x : arr[n]) {
        cout << x << " ";
    }
    cout << endl;
}

int32_t main() {
    fastio;
    int t = 1;
    vector<vector<int>> arr(N + 1);
    precompute(arr);
    cin >> t;
    while (t--) solution(arr);
    return 0;
}