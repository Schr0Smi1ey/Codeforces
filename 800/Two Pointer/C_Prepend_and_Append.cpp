#include<bits/stdc++.h>
using namespace std;
// prepend and append
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char str[n+1];
        cin>>str;
        int count = 0;
        int i=0,j=strlen(str)-1;
        while(i<=j)
        {
            if(str[i]=='0' && str[j]=='1')
            count++;
            else if(str[i]=='1' && str[j]=='0')
            count++;
            else
            break;
            i++;
            j--;
        }
        cout<<n-(2*count)<<endl;
    }
    return 0;
}