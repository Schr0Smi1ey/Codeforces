#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 + 5;

void solution() {
    int n;cin >> n;
    string str;cin >> str;
    int Bob = 0,Alice = 0;
    int i = 0,j = n - 1,cnt = 0,zero = 0;
    bool flag = true;
    while(i <= j){
        zero += (str[i] == '0');
        zero += (str[j] == '0' && i != j);
        if(str[i] != str[j]){
            flag = false;
            cnt++;
        }
        i++;j--;
    }
    if(flag){
        if(zero == 0){
            cout << "DRAW" << endl;
        }
        else if(zero % 2 == 0 || zero == 1){
            cout << "BOB" << endl;
        }
        else{
            cout << "ALICE" << endl;
        }
        return;
    }
    if(zero ==  2 && cnt == 1){
        cout << "DRAW" << endl;
        return;
    }
    cout << "ALICE" << endl;
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
