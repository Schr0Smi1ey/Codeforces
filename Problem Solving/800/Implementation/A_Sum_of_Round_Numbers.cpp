#include<bits/stdc++.h>
using namespace std;
// sum of round numbers
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string num;
        cin>>num;
        reverse(num.begin(),num.end());
        vector<int> arr;
        for(int i=0;i<num.size();i++)
        {
            int d = (num[i]-'0')*pow(10,i);
            if(d!=0)
            arr.push_back(d);
        }
        cout<<arr.size()<<endl;
        for(auto x : arr)
        cout<<x<<" ";
        cout<<endl;
    }
}