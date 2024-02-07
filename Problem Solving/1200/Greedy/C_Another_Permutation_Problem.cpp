#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int n;cin >> n;
    int sum = INT_MIN;
    for(int i=1,j;i<=n;i++){
        j = n;
        int temp = 0,temp_max = INT_MIN;
        for(int k = i;k<=n;k++){
            temp += (k*j);
            temp_max = max(temp_max,(k*j));j--;
        }
        temp += ((j*(j+1)*((2*j)+1))/6);
        sum = max(sum,temp - temp_max);
    }
    cout << sum << endl;
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


#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int n; cin >> n;
    if(n == 2) cout << "2" << endl;
    else {
        int ans = 0;
        for(int i = 1;i <= n; i++) {
            vector<int> v;
            for(int j = 1; j <= i; j++) v.push_back(j);
            for(int j = n; j > i; j--) v.push_back(j);
            int mx1 = 0;
            int cst = 0;
            for(int j = 0; j < n; j++) {
                cst += v[j] * (j + 1);
                mx1 = max(mx1, v[j] * (j + 1));
            }
            ans = max(ans, cst - mx1);
        }
        cout << ans << endl;
    }
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