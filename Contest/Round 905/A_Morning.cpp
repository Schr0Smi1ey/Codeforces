#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    string fixed = "1234567890";
    string str;cin >> str;
    int sum = 1;
    if(str[0] != '1'){
        str[0] == '0'?sum += 9:sum += (str[0]-'0'-1);
    }
    for(int i=1;i<str.size();i++){
        int temp,temp1;
        for(int j=0;j<fixed.size();j++){
            if(fixed[j] == str[i]){
                temp = (j+1);
            }
            if(fixed[j] == str[i-1]){
                temp1 = (j+1);
            }
        }
        sum += max(1LL,abs(temp - temp1));
        if(abs(temp-temp1))
        sum++;
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