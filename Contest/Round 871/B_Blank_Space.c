#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    int n;
    while(t--)
    {
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        int count = 0,k,temp;
        for(int i=0;i<n;)
        {
            temp = 0;
            if(arr[i]==0)
            {
                while(arr[i]==0)
                {
                    temp++;
                    i++;
                }
            }
            else
            i++;
            if(temp>count)
            count = temp;
        }
        printf("%d\n",count);
    }
}
