#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution()
{
    string str;cin >> str;
    int arr[26] = {0};
    for(int i=0;i<str.size();i++)
    arr[str[i]-'a']+=2;
    string result = "";
    for(int i=0;i<26;i++)
    {
        if(arr[i])
        {
            int x = arr[i]/2;
            arr[i] = arr[i]/2;
            while(x--)
            result += i + 'a';
        }
    }
    for(int i=25;i>=0;i--)
    {
        if(arr[i])
        {
            int x = arr[i];
            while(x--)
            result += i + 'a';
        }
    }
    cout << result << endl;
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