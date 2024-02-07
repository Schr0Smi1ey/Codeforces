#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution()
{
    int n;cin >> n;
    string str;
    cin >> str;
    int arr[26];
    for(int i=0;i<26;i++) {arr[i] = -1;};
    for(int i =0;i<n;i++)
    {
        if(arr[str[i] - 'a'] == -1)
        arr[str[i] - 'a'] = i%2;
        else if(arr[str[i]-'a'] != i%2)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}
signed main()
{
    fastio;
    int t;cin >> t;
    while(t--)
    {
        solution();
    }
    return 0;
}