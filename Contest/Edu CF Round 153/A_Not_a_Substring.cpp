#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution()
{
    string str; cin >> str;
    int n = str.size();
    int loop = 2*str.size();
    int temp = str.size(),k=str.size();
    vector<string> ans;
    while(loop--)
    {
        string s = "";
        int flag = n;
        for(int i=0;i<k;i++)
        s+='(';
        for(int i=0;i<k;i++)
        s+=')';
        flag = n-k;
        k--;
        for(int i=0;i<flag;i++)
        {
            s+="()";
        }
        ans.push_back(s);
    }
    for(auto it : ans)
    {
        if(it.find(str)==string::npos)
        {
            cout << "YES" << endl;
            cout << it << endl;
            return;
        }
    }
    cout << "NO" << endl;
}
signed main()
{
    fastio;
    int t;cin >> t;
    while(t--)
    {
        solution();
    }
}