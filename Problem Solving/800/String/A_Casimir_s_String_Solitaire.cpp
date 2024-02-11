#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        int a=0,b=0,c=0;
        for(auto it=str.begin();it<str.end();it++)
        {
            if(*it=='A')
            a++;
            else if(*it=='B')
            b++;
            else 
            c++;
        }
        if(b==0)
        cout<<"NO"<<endl;
        else if(c==0 && a==b)
        cout<<"YES"<<endl;
        else if(a==0 && b==c)
        cout<<"YES"<<endl;
        else if(b==a+c)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl; 
    }
    return 0;
}