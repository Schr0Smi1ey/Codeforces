#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n,t,q;
    scanf("%d",&q);
    while(q--)
    {
        scanf("%d %d",&n,&t);
        int time[n];
        int ent[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&time[i]);
            time[i]=time[i]+i;
        }
        int flag = 0,index=-1;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&ent[i]);
            if(time[i]<=t && ent[i]>=flag)
            {
                flag = ent[i];
                index = i+1;
            }
        }
        printf("%d\n",index);      
    }
}