#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
int point(string str)
{
    if(str == "posted") return 15;
    if(str == "likes") return 5;
    return 10;
}
signed main()
{
    fastio;
    string me;cin >> me;
    int n;cin >> n;
    cin.ignore();
    map<string,int> mp;
    while(n--)
    {
        string test;getline(cin,test);
        stringstream ss(test);
        string word,name1,operation,name2;int i=0;
        while(ss >> word)
        {
            if(i==0)
            {
                name1 = word;
            }
            if(i == 1)
            {
                operation = word;
            }
            if((i==2 && operation != "posted" && operation != "commented") || (i==3 && (operation == "commented" || operation == "posted")))
            {
                name2 = word;
                name2.pop_back();name2.pop_back();
            }
            i++;
        }
        if(name1 == me)
        mp[name2] += point(operation);
        else 
        mp[name1];
        if(name2 == me)
        mp[name1] += point(operation);
        else 
        mp[name2];
    }
    vector<pair<int,string>> v;
    for(auto x : mp)
    {
        v.push_back({-x.second,x.first});
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        cout << v[i].second << endl;
    }
    return 0;
}