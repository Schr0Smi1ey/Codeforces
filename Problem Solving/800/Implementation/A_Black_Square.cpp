#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
signed main()
{
    fastio;
    int arr[4];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
    string str;cin >> str;
    int sum = 0;
    for(int i=0;i<str.size();i++)
    {
        int indx = str[i]-'0';
        --indx;
        sum += arr[indx];
    }
    cout << sum ;
    return 0;
}