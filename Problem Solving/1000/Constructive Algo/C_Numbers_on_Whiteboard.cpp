#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        cout << "2" << endl; 
        /*
            It's easy to see that we can't get the result less than 2, because, if we merge two positive numbers, and at least one of them is 2 or greater, the new number is always greater than 1. So we can't get rid of all numbers greater than 1.

            To always achieve 2, we can use a greedy algorithm: always merge two maximum numbers. During the first step, we merge n and n−1, get n; then we merge n and n−2, get n−1; then we merge n−1 and n−3, get n−2; and it's easy to see that the last operation is merging 3 and 1, so the result is 2.
        */
        cout << n << " " << n - 1 << endl; // merge n,n-1 ((4+3)/2 = (4=rounded up value))
        int p = n, q = n - 1;
        for(int i = 0; i < n - 2; i++) {
            cout << p - i << " " << q - i - 1 << endl; 
            // merge n,n-2
            // merge n-1,n-3
            // continuously
        }
    }
    return 0;
}
