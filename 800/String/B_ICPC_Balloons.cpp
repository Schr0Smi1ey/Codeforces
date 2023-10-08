#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
void solution(){
    int n;cin >> n;
    string str;cin >> str;
    int fre[26] = {0},sum = 0;
    for(int i=0;i<str.size();i++){
        fre[str[i]-'A']++;
    }
    for(int i=0;i<26;i++){
        if(fre[i]){
            sum += fre[i];
            sum++;
        }
    }
    cout << sum << endl;
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