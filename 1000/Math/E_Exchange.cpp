#include<bits/stdc++.h>
using namespace std;
// exchange
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        if(a<=b)
        {
            int result = ceil((float)n/a);
            cout<<result<<endl;
        }
        else
        {
            cout<<1<<endl; // i can do unlimited exchange in one day
        }
    }
    return 0;
}