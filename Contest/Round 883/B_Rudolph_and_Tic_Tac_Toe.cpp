#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
#define mypower(x, n) ({int p=1;for(int i=0;i<n;i++){p*=x;}p;})
#define getbit(n,i) (((n) & (1LL << (i))) !=0)
void solution()
{
    char str[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>str[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        int count_x=0,count_p=0,count_o=0;
        for(int j=0;j<3;j++)
        {
            if(str[i][j]=='.')
            break;
            if(str[i][j]=='+')
            {
                count_p++;
            }
            else if(str[i][j]=='X')
            count_x++;
            else
            count_o++;
        }
        if(count_o==3)
        {
            cout<<'O'<<endl;return;
        }
        else if(count_p==3)
        {
            cout<<'+'<<endl;return;
        }
        else if(count_x==3)
        {
            cout<<"X"<<endl;return;
        }
    }
    int count_x=0,count_p=0,count_o=0;
    for(int i=0;i<3;i++)
    {  
        for(int j=0;j<3;j++)
        {
            if(i==j)
            {
                if(str[i][j]=='.')
                break;
                if(str[i][j]=='+')
                {
                    count_p++;
                }
                else if(str[i][j]=='X')
                count_x++;
                else
                count_o++;
            }
        }
        if(count_o==3)
        {
            cout<<'O'<<endl;return;
        }
        else if(count_p==3)
        {
            cout<<'+'<<endl;return;
        }
        else if(count_x==3)
        {
            cout<<"X"<<endl;return;
        }
    }
    for(int i=0;i<3;i++)
    {
        int count_x=0,count_p=0,count_o=0;
        for(int j=0;j<3;j++)
        {
            if(str[j][i]=='.')
            break;
            if(str[j][i]=='+')
            {
                count_p++;
            }
            else if(str[j][i]=='X')
            count_x++;
            else
            count_o++;
        }
        if(count_o==3)
        {
            cout<<'O'<<endl;return;
        }
        else if(count_p==3)
        {
            cout<<'+'<<endl;return;
        }
        else if(count_x==3)
        {
            cout<<"X"<<endl;return;
        }
    }
    count_x=0,count_p=0,count_o=0;
    for(int i=0;i<3;i++)
    {
        // int count_x=0,count_p=0,count_o=0;
        for(int j=0;j<3;j++)
        {
            if(i+j==2)
            {
                if(str[i][j]=='.')
                break;
                if(str[i][j]=='+')
                {
                    count_p++;
                }
                else if(str[i][j]=='X')
                count_x++;
                else
                count_o++;
            }
        }
        if(count_o==3)
        {
            cout<<'O'<<endl;return;
        }
        else if(count_p==3)
        {
            cout<<'+'<<endl;return;
        }
        else if(count_x==3)
        {
            cout<<"X"<<endl;return;
        }
    }
    cout<<"DRAW"<<endl;
}
signed main()
{
    int t;cin>>t;
    while(t--)
    {
        solution();
    }
    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define pii pair<int, int>
#define all(a) a.begin(), a.end()
const int mod = 998244353, N = 205;
 
void solve() {
    vector <string> s(3);
    cin >> s[0] >> s[1] >> s[2];
    for (int i = 0; i < 3; ++i) {
        if (s[i][0] == s[i][1] && s[i][1] == s[i][2] && s[i][0] != '.') {
            cout << s[i][0] << '\n';
            return;
        }
        if (s[0][i] == s[1][i] && s[1][i] == s[2][i] && s[0][i] != '.') {
            cout << s[0][i] << '\n';
            return;
        }
    }
    if (s[0][0] == s[1][1] && s[1][1] == s[2][2] && s[1][1] != '.') {
        cout << s[0][0] << '\n';
        return;
    }
    if (s[0][2] == s[1][1] && s[1][1] == s[2][0] && s[1][1] != '.') {
        cout << s[0][2] << '\n';
        return;
    }
    cout << "DRAW\n";
}
 
int main() {
    ios::sync_with_stdio(false), cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
*/
