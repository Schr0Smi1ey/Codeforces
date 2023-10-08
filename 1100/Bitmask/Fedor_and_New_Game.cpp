#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
#define getbit(n,i) ((n) & (1LL<<(i)))
signed main()
{
    fastio;
    int n,m,k;cin >> n >> m >> k;
    int arr[m+1];
    for(int i=0;i<m+1;i++){
        cin >> arr[i];
    }
    int cnt = 0;
    for(int i=0;i<m;i++){
        int temp = 0;
        for(int j=n-1;j>=0;j--){
            if((getbit(arr[i],j) && !getbit(arr[m],j)) || ((!getbit(arr[i],j) && getbit(arr[m],j)))){
                temp++;
            }
        }
        if(temp <= k){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
#define getbit(n,i) ((n) & (1LL<<(i)))
signed main()
{
    fastio;
    int n,m,k;cin >> n >> m >> k;
    int arr[m+1];
    for(int i=0;i<m+1;i++){
        cin >> arr[i];
    }
    int cnt = 0;
    for(int i=0;i<m;i++){
        int temp = 0;
        for(int j=0;j <= 20;j++){
                if(getbit(arr[i],j) != getbit(arr[m],j)){
                temp++;
            }
        }
        if(temp <= k){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
#define getbit(n,i) ((n) & (1LL<<(i)))
signed main()
{
    fastio;
    int n,m,k;cin >> n >> m >> k;
    int arr[m+1];
    for(int i=0;i<m+1;i++){
        cin >> arr[i];
    }
    int cnt = 0;
    for(int i=0;i<m;i++){
        int temp = (arr[i] ^ arr[m]);
        if(__builtin_popcount(temp) <= k){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}