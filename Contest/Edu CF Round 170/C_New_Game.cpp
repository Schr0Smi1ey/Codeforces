#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int
#define trace(x) cout << #x << " : " << x << endl;
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 + 5;

void solution() {
    int n,limit;
    cin >> n >> limit;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    vector<vector<int>> fre;
    fre.push_back({});
    int cnt =  1, last = -1;
    for (int i = 1; i < n; i++) {
        while(i < n && arr[i] == arr[i - 1]) {
            cnt++;
            i++;
        }
        if(last == -1 ) {
            fre.back().push_back(cnt);
        }
        else if (arr[i - 1] == last + 1) {
            fre.back().push_back(cnt);
        }
        else {
            fre.push_back({cnt});
        }
        last = arr[i - 1];
        cnt = 1;
        if(i == n - 1) {
            if(arr[i] == last + 1) {
                fre.back().push_back(cnt);
            }
            else {
                fre.push_back({cnt});
            }
        }
    }
    int ans = 1;
    for (int i = 0; i < fre.size(); i++) {
        int sum = 0;
        int j = 0, k = 0;
        while(j < fre[i].size()) {
            sum += fre[i][j];
            ans = max(ans, sum);
            if(j >= limit - 1) {
                sum -= fre[i][k];
                k++;
            }
            j++;
        }
    }
    cout << ans << endl;
}


int32_t main() {
    fastio;
    int t = 1;
    cin >> t;
    while(t--) {
        solution();
    }
    return 0;
}
