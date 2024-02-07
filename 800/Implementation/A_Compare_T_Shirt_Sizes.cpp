#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str1,str2;
        cin>>str1>>str2;
        int len1=str1.size(),len2 = str2.size();
        if(str1==str2)
        {
            cout<<"="<<endl;
            continue;
        }
        if(str1[len1-1]==str2[len2-1])
        {
            if(str1[len1-1]=='S')
            {
                puts(len1>len2?"<":">");
                continue;
            }
            else
            {
                puts(len1>len2?">":"<");
                continue;
            }
        }
        else if((str1[len1-1]=='S' && str2[len2-1]=='M') || (str1[len1-1]=='M' && str2[len2-1]=='S'))
        {
            puts(str1[len1-1]=='S'?"<":">");
        }
        else if((str1[len1-1]=='S' && str2[len2-1]=='L') || (str1[len1-1]=='L' && str2[len2-1]=='S'))
        {
            puts(str1[len1-1]=='S'?"<":">");
        }
        else if((str1[len1-1]=='M' && str2[len2-1]=='L') || (str1[len1-1]=='L' && str2[len2-1]=='M'))
        {
            puts(str1[len1-1]=='M'?"<":">");
        }
    }
    return 0;
}