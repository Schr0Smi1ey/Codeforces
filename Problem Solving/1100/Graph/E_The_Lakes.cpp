#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int N = 1e3 + 5;
int adj[N][N];
bool visited[N][N];
int n , m;
int dfs(int i, int j)
{
    int ans = adj[i][j];
    visited[i][j] = true;
    if(i!=0 && adj[i-1][j] != 0 && !visited[i-1][j])
    {
        ans += dfs(i-1,j);
    }
    if(i!=n-1 && adj[i+1][j] != 0 && !visited[i+1][j])
    {
        ans += dfs(i+1,j);
    }
    if(j!=0 && adj[i][j-1] != 0 && !visited[i][j-1])
    {
        ans += dfs(i,j-1);
    }
    if(j!= m-1 && adj[i][j+1] != 0 && !visited[i][j + 1])
    {
        ans += dfs(i , j+1);
    }
    return ans;
}
void solution()
{
    cin >> n >> m;
    for(int i=0;i<n;i++)
    {
        for(int j = 0; j< m;j++)
        {
            cin >> adj[i][j];
            visited[i][j] = false;
        }
    }
    int ans = 0;
    for(int i=0 ; i<n ;i++)
    {
        for(int j = 0; j< m;j++)
        {
            if(adj[i][j] != 0 && !visited[i][j])
            {
                ans = max(ans,dfs(i,j));
            }
        }
    }
    cout << ans << endl;
}
signed main()
{
    fastio;
    int t;cin >> t;
    while(t--)
    {
        solution();
    }
    return 0;
}



// OPTIMIZED FINDING NEIGHBOURING ROW AND COLOUMN
#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int N = 1e3 + 5;
int adj[N][N];
bool visited[N][N];
int n , m;
int drow[] = {-1,0,1,0};
int dcol[] = {0,1,0,-1};
int dfs(int i, int j)
{
    int ans = adj[i][j];
    visited[i][j] = true;

    for(int k =0;k<4;k++)
    {
        int nrow = i + drow[k];
        int ncol = j + dcol[k];
        if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && adj[nrow][ncol] != 0 && !visited[nrow][ncol])
        {
            ans += dfs(nrow,ncol);
        }
    }
    return ans;
}
void solution()
{
    cin >> n >> m;
    for(int i=0;i<n;i++)
    {
        for(int j = 0; j< m;j++)
        {
            cin >> adj[i][j];
            visited[i][j] = false;
        }
    }
    int ans = 0;
    for(int i=0 ; i<n ;i++)
    {
        for(int j = 0; j< m;j++)
        {
            if(adj[i][j] != 0 && !visited[i][j])
            {
                ans = max(ans,dfs(i,j));
            }
        }
    }
    cout << ans << endl;
}
signed main()
{
    fastio;
    int t;cin >> t;
    while(t--)
    {
        solution();
    }
    return 0;
}