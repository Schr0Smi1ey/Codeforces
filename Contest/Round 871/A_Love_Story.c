#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int t;
    char str[11];
    char fixed[]= "codeforces";
    scanf("%d",&t);
    while(t--)
    {
        int count = 0;
        scanf("%s",str);
        for(int i=0;i<strlen(str);i++)
        {
            if(str[i]!=fixed[i])
            count++;
        }
        printf("%d\n",count);
    }
    return 0;
}