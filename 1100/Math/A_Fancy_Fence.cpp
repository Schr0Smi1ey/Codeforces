#include<bits/stdc++.h>
using namespace std;
//fancy fence
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        float n;
        cin>>n;
        float p = 3,flag = 0;
        float angle = ((p-2)*180)/p; // interior angle of a polygon
        // angle can be float...and considering only the int value may lead to wrong result
        if(n<60)
        cout<<"NO"<<endl;
        else
        {
            while(angle<=n)
            {
                if(angle==n)
                {
                    flag++;
                    break;
                }
                p++;
                angle = ((p-2)*180)/p; 
            }
            puts(flag?"YES":"NO");
        }       
    }
    return 0;
}