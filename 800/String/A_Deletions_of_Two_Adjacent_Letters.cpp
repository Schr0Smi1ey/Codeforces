#include<bits/stdc++.h>
using namespace std;
// deletions of two adjacent letters
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char str[50],ch;
        cin>>str;
        cin>>ch;
        int flag=0;
        for(int i=0;i<strlen(str);i++)
        {
            if(str[i]==ch)
            {
                if(((i-0))%2==0 && ((strlen(str)-i-1)%2==0))
                flag++;
            }
        }
        if(flag)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}