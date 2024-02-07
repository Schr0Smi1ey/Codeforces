#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    string str;cin >> str;
    int w;cin >> w;
    int sum = 0;
    for(int i=0;i<str.size();i++){
        sum += (str[i] - 'a' + 1);
    }
    if(sum <= w){
        cout << str << endl;
        return;
    }
    string result = "",temp = str;
    sort(temp.begin(),temp.end(),greater<char>());
    map<char,int> mp;
    for(int i=0;i<str.size();i++){
        sum -= (temp[i] - 'a' + 1);
        mp[temp[i]]++;
        if(sum <= w){
            break;
        }
    }
    for(int i = 0;i<str.size();i++){
        if(mp[str[i]]){
            mp[str[i]]--;
            continue;
        }
        result += str[i];
    }
    cout << result << endl;
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