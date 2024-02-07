//Upsolved
#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int n;cin >> n;
    string str;cin >> str;
    if((n&1)){
        cout << -1 << endl;
        return;
    }
    vector<int> v;
    int i=0,j=n-1,k = 0;;
    /*
        Now s1=sn.If they are 1, insert 01 to the front; otherwise, insert 01 to the end.
        if it is possible to make it good , then it will be in 300 operation.
    */
    while(i < j && k <= 300){
        if(str[i] == str[j]){
            if(str[i] == '0'){
                v.push_back(j+1);
                str.insert(j+1,"01");
            }
            else{
                v.push_back(i);
                str.insert(i,"01");
            }
            i++;j++;k++;
        }
        else{
            i++;j--;
        }
    }
    if(k > 300){
        cout << -1 << endl;
        return;
    }
    cout << v.size() << endl;
    for(auto x : v){
        cout << x << " ";
    }
    if(v.size())
    cout << endl;
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