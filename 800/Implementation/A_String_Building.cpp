#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
void solution()
{
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        int a=0,b=0;
        if(str[i]=='a')
        {
            while(str[i]=='a')
            {
                a++;i++;
            }
            if(a<2)
            {
                cout<<"NO"<<endl;
                return;
            }
            i--;
        }
        else
        {
            while(str[i]=='b')
            {
                b++;i++;
            }
            if(b<2)
            {
                cout<<"NO"<<endl;
                return;
            }  
            i--;
        }
    }
    cout<<"YES"<<endl;
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        solution();
    }
    return 0;
}