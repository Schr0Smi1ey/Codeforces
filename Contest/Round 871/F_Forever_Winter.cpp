#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m,i,j,x,y;
        scanf("%d %d",&n,&m);
        int arr[m][2];
        int flag[210];
        memset(flag,0,sizeof(flag));
        for(i=0;i<m;i++)
        {
            for(j=0;j<2;j++)
            {
                scanf("%d",&arr[i][j]);
                flag[arr[i][j]-1]++;// for counting the distinct vertices
            }
        }
        int count=0;
        for(int i=0;i<n+1;i++)
        {
            if(flag[i]==1)
            count++; // number of distinct vertices (those vertices exactly appears ones in the vertices input they are distinct)
        }
        x = (n-count-1); // (total - distinct - central) // the central vertex also will be a distinct vertices
        y = count/(x); // (distinct/ x)
        printf("%d %d\n",x,y);
    }
    return 0;
}
