#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 + 5;

int best_score(int *per,int *arr,int n,int k,int pos){
    int step = 0,sum = 0,best = 0,start = pos;
    do{
        best = max(best,sum + ((k - step)*arr[pos]));
        step++;
        sum += arr[pos];
        pos = per[pos];
    }
    while(step < k && pos != start);
    return best;
}
void solution() {
    int n,k,b,s;cin >> n >> k >> b >> s;
    b--;s--;
    int per[n],arr[n];
    for(int i =0; i < n;i++){
        cin >> per[i];
        per[i]--;
    }
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }
    int sasha = best_score(per,arr,n,k,s);
    int boda = best_score(per,arr,n,k,b);
    if(sasha == boda){
        cout << "Draw" << endl;
    }
    else if(sasha > boda){
        cout << "Sasha" << endl;
    }
    else{
        cout << "Bodya" << endl;
    }
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
