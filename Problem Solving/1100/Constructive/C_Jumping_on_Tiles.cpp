#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
int cost = 0;
vector<int> calculate(vector<pair<char,int>> v, char c,char b){
    vector<int> ans;
    int index = -1;
    for(int i=0;i<v.size();i++){
        if(v[i].first == c && index == -1){
            ans.push_back((c>b)?-v[i].second:v[i].second);
            index = i;
            continue;
        }
        if(index == -1) continue;
        ans.push_back((c>b)?-v[i].second:v[i].second);
        cost += abs((int)(v[i].first - (v[i-1].first)));
        if(v[i].first == b && (i+1) < v.size() && (v[i+1].first != b)){
            break;
        }
    }
    return ans;
}
void print(vector<int> v){
    for(auto x : v){
        cout << x << " ";
    }
    cout << endl;
}
void solution(){
    string str;cin >> str;
    cost = 0;
    vector<pair<char,int>> v;
    vector<int> ans;
    for(int i=0;i<str.size();i++){
        v.push_back({str[i],str.front() > str.back()?-(i+1):(i+1)});
    }
    if(str.front() > str.back()){
        sort(v.begin(),v.end(),greater<pair<char,int>>());
    }
    else{
        sort(v.begin(),v.end());
    }
    ans = calculate(v,str.front(),str.back());
    cout << cost << " " << ans.size() << endl;
    print(ans);
}
signed main()
{
    fastio;
    int t;cin >> t;
    while(t--){
        solution();
    }
}