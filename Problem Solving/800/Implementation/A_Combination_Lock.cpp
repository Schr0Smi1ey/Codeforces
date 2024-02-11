#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define int long long int
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;cin>>n;string str,lock;
    cin>>str>>lock;
    int moves = 0,temp,temp1;
    for(int i=0;i<n;i++)
    {
        if(str[i]>lock[i])
        {
            temp = str[i]-lock[i];
            temp1 = 9-str[i]+lock[i]+1;
            moves+=min(temp,temp1);
        }
        else if(lock[i]>str[i])
        {
            temp = lock[i]-str[i];
            temp1 = 9-lock[i]+str[i]+1;
            moves+=min(temp,temp1);
        }
    }
    cout<<moves;
    return 0;
}