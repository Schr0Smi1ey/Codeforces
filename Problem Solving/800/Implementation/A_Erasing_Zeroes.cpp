#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>str;
        int first=0,last=0,count=0;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='1')
            {
                first = i;
                break;
            }
        }
        for(int i=str.size()-1;i>=0;i--)
        {
            if(str[i]=='1')
            {
                last = i;
                break;
            }
        }
        for(int i=first;i<last;i++)
        {
            if(str[i]=='0')
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}