#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int

void solution() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(i > 0) {
            arr[i] = arr[i - 1] + arr[i];
        }
    }
    int m;
    cin >> m;
    while(m--) {
        int query;
        cin >> query;
        cout << lower_bound(arr, arr + n, query) - arr + 1 << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solution();
    return 0;
}

// Using binary search
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int

int search(int *arr, int n, int target) {
    int low = 0, high = n - 1, mid, result = 0;
    while(low <= high) {
        mid = low + (high - low) / 2;
        if(arr[mid] >= target) {
            result = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ++result;
}

void solution() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(i > 0) {
            arr[i] = arr[i - 1] + arr[i];
        }
    }
    int m;
    cin >> m;
    while(m--) {
        int query;
        cin >> query;
        cout << search(arr, n, query) << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solution();
    return 0;
}
