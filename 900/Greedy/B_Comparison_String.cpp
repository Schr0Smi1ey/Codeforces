#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
// ans will be (count+1) contigous of (>) or (>)
void solution()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    int temp=0,temp1=0,count=0;
    for(int i=0;i<n;i++)
    {
        temp = 0,temp1=0;
        if(str[i]=='>')
        {
            while(str[i]=='>')
            {
                temp++;
                if(str[i+1]=='>')
                i++;
                else
                break;
            }
        }
        else
        {
            while(str[i]=='<')
            {
                temp1++;
                if(str[i+1]=='<')
                i++;
                else
                break;
            }
        }
        count = max(count,max(temp,temp1));
    }
    cout<<count+1<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solution();
    }
    return 0;
}