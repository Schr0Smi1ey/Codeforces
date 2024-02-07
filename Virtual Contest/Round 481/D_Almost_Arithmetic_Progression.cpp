#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
signed main()
{
    fastio;
    int n; cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    if(n <= 2)
    {
        cout << 0 ;
        return 0;
    }
    int cnt = INT_MAX;
    for(int d1 = -1 ; d1<=1 ; d1++)
    {
        for(int d2 = -1 ; d2<=1 ; d2++)
        {
            bool possible = true;
            vector<int> temp(n);
            int flag = abs(d1) + abs(d2);
            temp[0] = arr[0] + d1;
            temp[1] = arr[1] + d2;
            int diff = temp[1] - temp[0];
            for(int i = 2; i<n; i++)
            {
                temp[i] = temp[i-1] + diff;
                if(abs(temp[i] - arr[i]) > 1)
                {
                    possible = false;
                    break;
                }
                if(temp[i] != arr[i])
                {
                    flag++;
                }
            }
            if(possible)
            cnt = min(cnt,flag);
        }
    }
    if(cnt != INT_MAX)
    cout << cnt;
    else
    cout << -1;

    return 0;
}