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
        int n;
        scanf("%d",&n);
        getchar();
        char str[n+1];
        gets(str);
        // getchar();
        int flag=0,f=0,c=0;
        int arr[26];
        int arr2[26];
        memset(arr,0,sizeof(arr));
        memset(arr2,0,sizeof(arr2));
        if(n&1)
        {
            printf("-1\n");
            continue;
        }
        else
        {
            for(int i=0;i<n/2;i++)
            {
                arr[str[i]-'a']++;
                arr[str[n-i-1]-'a']++;
                if(str[i]==str[n-i-1])
                arr2[str[i]-'a']++;
            }
        }
        for(int i=0;i<26;i++)
        {
            if(arr[i]>n/2)
            {
                f++;
                break;
            }
            if(arr2[i]>c)
            c = arr2[i];
            flag=flag+arr2[i];
        }
        if(f)
        {
            printf("-1\n");
            continue;
        }
        flag = ((flag+1)/2);
        printf("%d\n",(flag>c)?flag:c); // it may happened like there is mismatch of (a) 4 times so we have to swap 4 times
        // but if we print flag it will be 2 which isn't correct so we have to print largest one among flag & c.
    }
    return 0;
}