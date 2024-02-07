#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
void solution(vector<int>& XOR)
{
    int a,b;
    cin>>a>>b;
    // now if XOR value of all elements before MEX is equal to b then the ans will be (a(size of the array))
    if(b==XOR[a-1])
    {
        cout<<a<<endl;
    }
    else if((b^XOR[a-1])!=a) // x^(b^x) == b  // means we have add an extra element which is equal to (b^x)
    {
        cout<<a+1<<endl;
    }
    else // when x is equal to MEX OR ....in this case we have to add two elements as we can't use MEX value
    {
        cout<<a+2<<endl; // x ^ (b^x^a)^a == b // extra two elements : (b^x^a) and a
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // pre_sum of possible XOR value
    int n = 3e5+5;
    vector<int> XOR(n,0);
    for(int i=1;i<=n;i++)
    {
        XOR[i]= XOR[i-1]^i;
    }
    int t;cin>>t;
    while(t--)
    {
        solution(XOR);   
    }
    return 0;
}