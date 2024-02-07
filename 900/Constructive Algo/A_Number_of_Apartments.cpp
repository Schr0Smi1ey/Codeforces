#include<bits/stdc++.h>
using namespace std;
// number of apartments
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,rem;
        cin>>n;
        if(n<7 && n%3!=0 && n%5!=0)
        cout<<-1<<endl;
        else
        {
            if(n%3==0)
            cout<<n/3<<" "<<0<<" "<<0<<endl;
            else if(n%3==2)
            {
                cout<<(n-5)/3<<" "<<1<<" "<<0<<endl;
            }
            else
            cout<<(n-7)/3<<" "<<0<<" "<<1<<endl;
        }
    }  
}