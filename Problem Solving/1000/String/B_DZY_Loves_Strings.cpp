#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
signed main()
{
    fastio;
    string str;cin >> str;
    int x;cin >> x;
    int arr[26];priority_queue<int> pq;
    for(int i=0;i<26;i++){
        cin >> arr[i];
        pq.push(arr[i]);
    }
    int sum = 0,k = 1;
    for(int i=0;i<str.size();i++){
        sum += (arr[str[i]-'a']*(k++));
    }
    while(x--){
        sum += (pq.top()*(k++));
    }
    cout << sum ;
    return 0;
}