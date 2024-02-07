#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
int n;
bool is_valid(int i,int j)
{
    return (i>=0 && i<n && j>=0 && j<n);
}
signed main()
{
    fastio;
    cin >> n;
    char str[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> str[i][j];
        }
    }
    int drow[] = {1,0,-1,0};
    int dcol[] = {0,1,0,-1};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int temp = 0;
            for(int k=0;k<4;k++)
            {
                int nx = i + drow[k];
                int ny = j + dcol[k];
                if(is_valid(nx,ny) && str[nx][ny] == 'o')
                temp++;
            }
            if(temp&1)
            {
                cout << "NO";return 0;
            }
        }
    }
    cout << "YES";
    return 0;
}