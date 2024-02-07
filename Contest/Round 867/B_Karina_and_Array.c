#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int comparison(const void *a,const void *b);
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,i,j;
        scanf("%lld",&n);
        long long int arr[n],mul[n];
        for(i=0;i<n;i++)
        {
            scanf("%lld",&arr[i]);
        }
        qsort(arr,n,sizeof(long long int),comparison);
        if(arr[0]*arr[1] > arr[n-1]*arr[n-2])
        printf("%lld\n",arr[0]*arr[1]);
        else
        printf("%lld\n",arr[n-1]*arr[n-2]);
    }
    return 0;
}
int comparison(const void *a,const void *b)
{
    return *(long long int *)a - *(long long int *)b;
}