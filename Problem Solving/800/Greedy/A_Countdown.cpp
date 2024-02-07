#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution()
{
    int n , digit = 0 , ans = 0; cin >> n;
    string str; cin >> str;
    int i = n-1;
    while(true)
    {
        bool flag = true;
        if(str[i]-'0')
        {
            ans += str[i] - '0';
            str[i] = '0';
            for(int j=0;j<n;j++)
            {
                if(str[j]-'0')
                {
                    flag = false;
                    swap(str[i],str[j]);
                    ans++;
                }
                if(!flag) break;
            }
        }
        else
        {
            for(int j=0;j<n;j++)
            {
                if(str[j]-'0')
                {
                    flag = false;
                    swap(str[i],str[j]);
                    ans++;
                    break;
                }
                if(!flag) break;
            }
        }
        if(flag)
        break;
    }
    cout << ans << endl;
}
signed main()
{
    fastio;
    int t; cin >> t;
    while(t--)
    {
        solution();
    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution()
{
    int n , digit = 0 , ans = 0; cin >> n;
    string str; cin >> str;
    for(int i=0;i<n;i++)
    {
        ans += str[i] - '0';
        if(i!=n-1 && str[i]!='0')
		ans++;
    }
    cout << ans << endl;
}
signed main()
{
    fastio;
    int t; cin >> t;
    while(t--)
    {
        solution();
    }
    return 0;
}
