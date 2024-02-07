#include<bits/stdc++.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
// stone game
// accepted solution 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n],result;
        int maxindex,minindex;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==n)
            {
                maxindex = i+1;
            }
            if(arr[i]==1)
            {
                minindex = i+1;
            }
        }
        if(minindex>maxindex)
        swap(minindex,maxindex);
        int flag = max(maxindex,minindex); // present move if i start removing from left
        if(flag>((n+1)-minindex)) // (n-minindex) jodi flag theke suto hy then amr move lagbe (n-minindex) ta
        flag = n +1 - minindex;
        if(flag>minindex+((n+1)-maxindex)) 
        flag = minindex + ((n +1) - maxindex);
        cout<<flag<<endl;
    }
    return 0;
}
