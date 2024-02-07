#include<bits/stdc++.h>
using namespace std;
// food and animals
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;
        x-=a; 
        y-=b;
        {
            if(x>0 && y>0)
            x+=y;
            else if(y>0)
            x=y;
        }
        x-=c;
        if(x>0)
        puts("NO");
        else
        puts("YES");
    }
    return 0;
}