#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int n,k;cin >> n >> k;
    string str;cin >> str;
    int fre[26] = {0};
    for(int i=0;i<n;i++){
        fre[str[i]-'a']++;
    }
    int odd = 0 , even = 0;;
    for(int i=0;i<26;i++){
        if(fre[i]&1){
            odd++;
        }
        else{
            even++;
        }
    }
    if(odd == 0 && k < str.size()){
        cout << "YES" << endl;
        return;
    }
    else if(odd > (k+1)){
        cout << "NO" << endl;
        return;
    }
    else{
        odd -= min(odd,k);
        if(odd > 1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
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