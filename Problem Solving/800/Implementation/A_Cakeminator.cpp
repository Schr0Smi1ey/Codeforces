#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
// Long Solution
signed main()
{
    fastio;
    int r,c;cin >> r >> c;
    char str[r][c];
    bool visited[r][c];
    memset(visited,false,sizeof(visited));
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        cin >> str[i][j];
    }
    int cnt = 0;
    for(int i=0;i<r;i++)
    {
        int temp = 0;
        bool flag = false;
        for(int j=0;j<c;j++)
        {
            if(str[i][j] == 'S')
            {
                flag = true;
                break;
            }
            temp++;
        }
        if(!flag)
        {
            cnt += temp;
            for(int j=0;j<c;j++)
            {
                visited[i][j] = true;
            }
        }
    }
    for(int i=0;i<c;i++)
    {
        int temp = 0;
        bool flag = false;
        for(int j=0;j<r;j++)
        {
            if(str[j][i] == 'S')
            {
                flag = true;
                break;
            }
            if(!visited[j][i])
            temp++;
        }
        if(!flag)
        {
            cnt += temp;

        }
    }
    cout << cnt ;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
// Short Solution
signed main()
{
    fastio;
    int r,c;cin >> r >> c;
    set<int> rt,ct;
    char ch;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin >> ch;
            if(ch == 'S')
            {
                rt.insert(i);ct.insert(j);
            }
        }
    }
    cout << (r*c) -(rt.size() * ct.size());
    return 0;
}