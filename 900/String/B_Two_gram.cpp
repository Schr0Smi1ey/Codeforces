#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int

signed main()
{
    fastio;
    int n;
    cin >> n;
    string str;
    cin >> str;
    vector<string> v;
    for(int i = 0; i < str.size() - 1; i++)
    {
        v.push_back(str.substr(i, 2));
    }
    string result = "";
    int maxima = INT_MIN;
    for(int i = 0; i < v.size(); i++)
    {
        int count = 0;
        int pos = str.find(v[i]);
        while(pos != string:: npos)
        {
            count++;
            pos = str.find(v[i],pos+1);
        }
        if(count > maxima)
        {
            maxima = count;
            result = v[i];
        }
    }
    cout << result << endl;
    return 0;
}