#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
#define mypower(x,n) ({int _p=1;for(int _i=0;_i<n;_i++){_p*=x;}_p;})
signed main()
{
    fastio;
    int n;cin >> n;
    string str;cin >> str;
    int cnt = 0;
    for(int i=1;i<n;i+=2){
        if(str[i] == str[i-1])
        {
            cnt++;
            str[i] = (str[i-1]=='a')?'b':'a';
        }
    }
    cout << cnt << endl << str << endl;
    return 0;
}