#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
void solution(){
    string str;
    cin >> str;
    string temp = str;
    if(str == "abc")
    {
        cout << "YES" << endl;
        return;
    }
    swap(str[0],str[1]);
    if(str == "abc")
    {
        cout << "YES" << endl;
        return;
    }
    str = temp;
    swap(str[1],str[2]);
    if(str == "abc")
    {
        cout << "YES" << endl;
        return;
    }
    str = temp;
    swap(str[0],str[2]);
    if(str == "abc")
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
}
signed main()
{
    fastio;
    int t;
    cin >> t;
    while(t--){
        solution();
    }
    return 0;
}