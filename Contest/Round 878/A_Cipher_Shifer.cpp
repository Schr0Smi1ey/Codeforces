#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;
        string result;
        char ch;
        for(int i=0;i<str.size();i++)
        {
            result.push_back(str[i]);
            ch = str[i];
            i++;
            while(ch!=str[i])
            {
                i++;
            }
        }
        cout<<result<<endl;
    }
    return 0;
}
