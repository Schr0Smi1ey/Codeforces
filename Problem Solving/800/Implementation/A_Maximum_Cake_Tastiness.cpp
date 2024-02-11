#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long max = -1;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];           
        }
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if ((long long)(arr[i] + arr[j]) > max) { // finding the maximum sum of two elements is enough for answer
                    max = (long long)(arr[i] + arr[j]); // can be done more simply finding the largest and second largest element
                }                                       // or we can do it by sorting the array
            }
        }
        cout << max << endl;
    }
    return 0;
}
