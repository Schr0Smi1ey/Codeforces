#include<bits/stdc++.h>
using namespace std;
//fashionable
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%4==0) // notice the test case very carefully
        puts("YES");
        else
        puts("NO");
    }
    return 0;
}