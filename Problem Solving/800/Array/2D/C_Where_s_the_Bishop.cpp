#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
#define getbit(n,i) ((n) & (1LL<<(i)))
bool isValid(int i,int j){
    return (i<8 && i>=0 && j<8 && j>=0);
}
int drow[4] = {1,1,-1,-1};
int dcol[4] = {1,-1,1,-1};
void solution(){
    char str[8][8];
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin >> str[i][j];
        }
    }
    for(int i=1;i<7;i++){
        for(int j=1;j<7;j++){
            bool flag = true;
            int x = i,y = j;
            if(str[x][y] == '#'){
                for(int i=0;i<4;i++){
                    int nx = x + drow[i];
                    int ny = y + dcol[i];
                    if(!isValid(nx,ny) || str[nx][ny] != '#'){
                        flag = false;
                        break;
                    }
                }
            }
            else{
                flag = false;
            }
            if(flag){
                cout << ++i << " " << ++j << endl;
                return;
            }
        }
    }
}
signed main()
{
    fastio;
    int t;cin >> t;
    while(t--){
        solution();
    }   
    return 0;
}