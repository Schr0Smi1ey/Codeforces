#include<bits/stdc++.h>
using namespace std;
// hq9+
int main()
{
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='H' || str[i]=='Q' || str[i] == '9')
        {
            puts("YES");
            return 0;
        }
    }
    puts("NO");
    return 0;
}
