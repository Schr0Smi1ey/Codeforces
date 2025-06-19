#include <bits/stdc++.h>
using namespace std;
#ifndef ONLINE_JUDGE
#include "debug_template.hpp" 
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
const int N = 2e5 + 5;

void solution() {
    int n; cin >> n;
    int arr[n], brr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> brr[i];
    }
    vector<pair<int,int>> v;
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                v.push_back({1, j + 1});
                swap(arr[j],arr[j + 1]);
            }
        }
    }
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(brr[j] > brr[j + 1]) {
                v.push_back({2, j + 1});
                swap(brr[j], brr[j + 1]);
            }
        }
    }
    for(int i = 0; i < n; i++) {
        if(arr[i] > brr[i]) {
            v.push_back({3, i + 1});
        }
    }
    cout << v.size() << endl;
    for(int i = 0; i < (long long)(v.size()); i++) {
        cout << v[i].first << " " << v[i].second << endl;
    }
}

int32_t main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solution();
    return 0;
}