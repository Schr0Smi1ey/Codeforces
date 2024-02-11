#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int

void solution() {
    ll n, m;
    cin >> n >> m;
    ll arr[m];
    ll total_time = 0;
    for(int i = 0; i < m; i++) {
        cin >> arr[i];
        if(i == 0)
            total_time += arr[i];
        else if(arr[i] >= arr[i - 1])
            total_time += arr[i] - arr[i - 1];
        else
            total_time += n - arr[i - 1] + arr[i];
    }
    cout << total_time - 1 << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solution();
    return 0;
}
