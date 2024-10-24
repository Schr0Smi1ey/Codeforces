#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int
#define trace(x) cout << #x << " : " << x << endl;
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 + 5;

void update(vector<vector<int>> &arr, vector<pair<int, int>> &index, int maxima) {
    for(auto x : index) {
        arr[x.first][x.second] += maxima;
    }
}

void solution() {
    int n;cin >> n;
    vector<vector<int>> arr(n, vector<int>(n));
    for(int i = 0;i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    int step = 0, c = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(arr[i][j] < 0) {
                vector<pair<int, int>> index;
                int xi = i, xj = j, maxima = MINF;
                while(xi < n && xj < n) {
                    if(arr[xi][xj] < 0) {
                        maxima = max(maxima, abs(arr[xi][xj]));
                        index.push_back({xi, xj});
                    }
                    xi++;
                    xj++;
                }
                update(arr, index, maxima);
                step += maxima;
            }
        }
    }
    cout << step << endl;
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
