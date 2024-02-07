// Upsolved
#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
int check(int a,int b,int c){
    return (b % 2 == c % 2);
}
void solution(){
    int a,b,c;cin >> a >> b >> c;
    int x,y,z;
    x = check(a,b,c);
    y = check(b,a,c);
    z = check(c,a,b);
    cout << x << " " << y << " " << z << endl;
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