#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define int long long int
#define getbit(n,i) (((n) & (1LL << (i))) !=0)
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string str,temp;
    cin>>str>>temp;
    int i=0,j=0;
    while(j<temp.size() && i<str.size())
    {
        if(str[i]==temp[j])
        {
            i++;j++;
        }
        else
        {
            j++;
        }
    }
    cout<<i+1<<endl;
    return 0;
}