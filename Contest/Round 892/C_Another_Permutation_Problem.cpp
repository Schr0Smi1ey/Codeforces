#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution()
{
    int n;cin >> n;
    vector<int> v;
    vector<int> v2(n+1);
    v2[0] = 0;
    int sum = 0;
    for(int i = 1;i<=n;i++)
    {
        sum+=(i*i);
        v2[i] = i*i;
        // maxima = max(i*i,maxima);
    }
    // int bf = sum - maxima;
    int ans = INT_MIN;
    for(int i=1;i<=n;i++)
    {
        v = v2;
        int temp = i*i;
        bool flag = true;
        for(int j=1;j<=n;j++)
        {
            int temp2 = j*j;
            if(flag)
            {
                sum -= (temp + temp2);
                flag = false;
            }
            v[i] = i*j;
            v[j] = i*j;
            int sum1 = sum - (i*i) - (j*j) + (2*(i*j));
            int element = *max_element(v.begin(),v.end());
            ans= max(ans, sum1 -element);
        }
    }
    cout << ans << endl;
}
signed main()
{
    fastio;
    int t; cin >> t ;
    while(t--)
    {
        solution();
    }
    return 0;
}