#include<bits/stdc++.h>
using namespace std;
// best binary string
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        char x = '0';
		for(auto& c: str)
        {
			if(c=='?') 
            c=x;
			x=c;
		}
		cout<<str<<"\n";
    }
}