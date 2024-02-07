#include<bits/stdc++.h>
using namespace std;
// grab the candies
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int even=0,odd=0;
        while(n--)
        {
            int p;
            cin>>p;
            ((p%2==0)?even:odd)+=p;
        }
        puts(even>odd?"YES":"NO");
    }
    return 0;
}