#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
bool is_palindrome(string str)
{
    int i =0 ,j = str.size()-1;
    while(i <= j)
    {
        if(str[i++] != str[j--])
        return false;
    }
    return true;
}
void solution()
{
    string str; cin >> str;
    string ano = "a";
    ano += str;
    str += 'a';
    bool flag = (is_palindrome(str)) && (is_palindrome(ano));
    if(flag)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        if(!is_palindrome(str))
        cout << str << endl;
        else
        cout << ano << endl;
    }
}
signed main()
{
    fastio;
    int t; cin >> t;
    while(t--)
    {
        solution();
    }
}