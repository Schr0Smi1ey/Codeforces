#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int M = 205;
int n,m;
bool valid(int i,int j){
    return (i<n && i>=0 && j<m && j>=0);
}
int total(int i,int j,int a,int b,int arr[M][M]){
    int ss = 0;
    while(valid(i,j)){
        ss += arr[i][j];
        i += a;
        j += b;
    }
    return ss;
}
const int drow[] = {1,1,-1,-1};
const int dcol[] = {1,-1,-1,1};
int calc(int i,int j,int arr[M][M]){
    int sum = arr[i][j];
    for(int k=0;k<4;k++){
        sum += total(i+drow[k],j+dcol[k],drow[k],dcol[k],arr);
    }
    return sum;
}
void solution(){
    cin >> n >> m;
    int v[M][M]; // Using arrays instead of vector in more time efficient
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> v[i][j];
        }
    }
    int ans = INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ans = max(ans,calc(i,j,v));
        }
    }
    cout << ans << endl;
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