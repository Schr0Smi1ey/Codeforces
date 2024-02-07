#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;

void solution(){
    int total = 0, k = 1;
    char c;
    for(int i=0;i<10;i++){
        for(int j = 0;j<10;j++){
            cin >> c;
            if(c == 'X'){
                if(i>=4 && i<=5 && j>=4 && j<=5){
                    total+=5;
                }
                else if(i>=3 && i<=6 && j>=3 && j<=6){
                    total += 4;
                }
                else if(i>=2 && i<=7 && j>=2 && j<=7){
                    total += 3;
                }
                else if(i>=1 && i<=8 && j>=1 && j<=8){
                    total += 2;
                }
                else
                total += 1;
            }
        }
    }
    cout << total << endl;
}

signed main() {
    fastio;
    int t;
    cin >> t;
    while(t--){
        solution();
    }
    return 0;
}