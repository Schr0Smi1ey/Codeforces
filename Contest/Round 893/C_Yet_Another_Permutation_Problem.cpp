#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int N = 2e5 ; 
bool visited[N];
void solution()
{
    memset(visited,false,sizeof(visited));
    int n; cin >> n;
    for(int i=1;i<=n;i++)
    {
        if(visited[i]) continue;
        if(i == 1)
        {
            visited[i] = true;
            cout << i << " ";
        }
        else
        {
            cout << i << " ";
            visited[i] = true;
            int j = i*2;
            while(j <= n)
            {
                if(!visited[j])
                cout << j << " ";
                visited[j] = true;
                j*=2;
                if(j > n)
                break;
            }
        }
    }
    cout << endl;
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