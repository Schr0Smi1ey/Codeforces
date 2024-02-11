#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long int

int search(int *arr, int n, int target) { // binary search to find the upper bound
    if (target < arr[0])
        return 0;
    int low = 0, high = n - 1, count;
    if (target >= arr[high])
        return n;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] <= target) {
            count = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ++count; // (++) for 1-based indexing
}

void solution() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    int m;
    cin >> m;
    while (m--) {
        int coin;
        cin >> coin;
        cout << search(arr, n, coin) << endl;
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solution();
    return 0;
}

// Another solution
#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long int

void solution() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    int m;
    cin >> m;
    while (m--) {
        int val;
        cin >> val;
        cout << upper_bound(arr, arr + n, val) - arr << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solution();
    return 0;
}
