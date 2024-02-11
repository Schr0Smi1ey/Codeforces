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
        int n;         // considering n=4 
                        // a[4]= {4,3,2,1} then we will a arr[b] which will be a super permutation
        scanf("%d",&n);
        int b[n];
        if(n==1)
        printf("1\n");
        else if(n&1)
        printf("-1\n");
        else
        {
            printf("%d ",n);
            int test  = n;
            test--;
            for(int i=test;i>=1;i--)
            {
                if(i%2)
                printf("%d ",i); 
                else
                printf("%d ",n-i);
            }
            printf("\n");
        }
        
    }
    return 0;
}
