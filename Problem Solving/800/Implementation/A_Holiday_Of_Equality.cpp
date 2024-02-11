#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, maxima = INT_MIN, sum = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        maxima = max(maxima, arr[i]);
    }
    for (int i = 0; i < n; i++) {
        sum += (maxima - arr[i]); // will equal every element with the maximum one as we can't modify their existing value
    }
    cout << sum;
    return 0;
}
