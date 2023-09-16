#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int

void solution()
{
    int n;
    cin >> n;
    map<string, int> mp1, mp2, mp3;
    vector<string> v[3];
    string str;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> str;
            v[i].push_back(str);
            if (i == 0)
                mp1[str]++;
            else if (i == 1)
                mp2[str]++;
            else
                mp3[str]++;
        }
    }

    int one = 0, two = 0, three = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mp1.count(v[i][j]) && !mp2.count(v[i][j]) && !mp3.count(v[i][j]))
            {
                one += 3;
                mp1.erase(v[i][j]);
            }
            else if (!mp1.count(v[i][j]) && mp2.count(v[i][j]) && !mp3.count(v[i][j]))
            {
                two += 3;
                mp2.erase(v[i][j]);
            }
            else if (!mp1.count(v[i][j]) && !mp2.count(v[i][j]) && mp3.count(v[i][j]))
            {
                three += 3;mp3.erase(v[i][j]);
            }
            else if (mp1.count(v[i][j]) && mp2.count(v[i][j]) && !mp3.count(v[i][j]))
            {
                one++;two++;mp1.erase(v[i][j]);mp2.erase(v[i][j]);
            }
            else if (!mp1.count(v[i][j]) && mp2.count(v[i][j]) && mp3.count(v[i][j]))
            {
                two++;three++;mp2.erase(v[i][j]);mp3.erase(v[i][j]);
            }
            else if (mp1.count(v[i][j]) && !mp2.count(v[i][j]) && mp3.count(v[i][j]))
            {one++;three++;mp1.erase(v[i][j]);mp3.erase(v[i][j]);}
        }
    }

    cout << one << " " << two << " " << three << endl;
}

signed main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
}
