#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,q;
        cin>>n>>k>>q;
        int arr[n];
        vector<int> fre;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int count ;
        for(int i=0;i<n;i++)
        {
            count = 0;
            if(arr[i]<=q)
            {
                while(arr[i]<=q)
                {
                    count++;
                    if(arr[i+1]<=q)
                    i++;
                    else 
                    break;
                    if(i>=n)
                    break;
                }
            }
            fre.push_back(count);
        }
        long long int sum = 0;
        int p = k;
        k--;
        for(int i=0;i<fre.size();i++)
        {         
            if(fre[i]>=p)
            {                
                long long int temp = ((long long)(fre[i]-k)*(long long)(fre[i]-k+1))/(long long)2;
                sum+= temp;
            }
        }
        cout<<sum<<endl;
    }
}