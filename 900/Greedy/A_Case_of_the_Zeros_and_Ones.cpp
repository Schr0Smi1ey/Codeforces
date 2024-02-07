#include<bits/stdc++.h>
using namespace std;
//case of the zeros and ones
int main()
{
    int n;
    cin>>n;
    char str[n+1];
    scanf("%s",str);
    int ones = 0;
    int zero = 0;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='1')
        ones++;
        else
        zero++;
    }
    int maxima = max(ones,zero); // read the question again .... implement on paper 
    int minima = min(ones,zero);
    cout<<maxima-minima;
    return 0;
}