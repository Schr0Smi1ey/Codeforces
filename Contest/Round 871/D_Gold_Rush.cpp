#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int check(int n,int m);
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d %d",&n,&m);
        if(check(n,m))
        printf("YES\n");
        else
        printf("NO\n");
    }
}
int check(int n,int m)
{
    if(n==m)
    return 1;
    if(n%3!=0 || n<m) // %3 cause = x + 2x (so n must be divisible by 3)
    return 0;
    if(n%3==0)
    return check(n/3,m) + check((2*n)/3,m); // 
}