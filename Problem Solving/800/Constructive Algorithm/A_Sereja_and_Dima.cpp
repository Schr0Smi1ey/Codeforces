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
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    int i = 0, j = n - 1, k = 0, sereja = 0, dima = 0;
    while (i <= j) {
        if (k % 2 == 0) {
            if (arr[i] > arr[j]) {
                sereja += arr[i];
                i++;
            } else {
                sereja += arr[j];
                j--;
            }
        } else {
            if (arr[i] > arr[j]) {
                dima += arr[i];
                i++;
            } else {
                dima += arr[j];
                j--;
            }
        }
        k++;
    }
    cout << sereja << " " << dima;
    return 0;
}
