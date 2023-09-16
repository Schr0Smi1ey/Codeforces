#include<bits/stdc++.h>
using namespace std;
void solution()
{
    int n;cin >> n;
    string str;
    cin >> str;
    if(str.find("ab")!=string::npos)
    {
        int pos = str.find("ab");
        pos++;
        cout << pos << " " << pos+1 << endl;
        return;
    }
    if(str.find("ba")!=string::npos)
    {
        int pos = str.find("ba");
        pos++;
        cout << pos << " " << pos+1 << endl;
        return;
    }
    cout << -1 <<  " " << -1 << endl;
}

int main()
{
    int t;cin >> t;
    while(t--)
    {
        solution();
    }
    return 0;
}