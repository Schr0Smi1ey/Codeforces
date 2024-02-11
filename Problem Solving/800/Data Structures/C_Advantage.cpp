#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int

void solution() {
    int n;
    cin >> n;
    int arr[n];
    vector<int> temp(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        temp[i] = arr[i];
    }
    sort(temp.begin(), temp.end(), greater<int>());
    int second_largest = temp[1];
    for(int i = 0; i < n; i++) {
        if(arr[i] != temp[0])
            cout << arr[i] - temp[0] << " ";
        else
            cout << arr[i] - second_largest << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
        solution();
    }
    return 0;
}
