#include<bits/stdc++.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int ab_max,bc_max,ac_max;
        ab_max = (a>b)?a:b;
        bc_max = (b>c)?b:c;
        ac_max = (a>c)?a:c;
        cout<<((a>bc_max)?0:bc_max+1-a)<<" "<<((b>ac_max)?0:ac_max+1-b)<<" "<<((c>ab_max)?0:ab_max+1-c);
        cout<<endl;
    }
    return 0;
}