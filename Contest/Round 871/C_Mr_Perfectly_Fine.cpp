#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
int main()
{
    long long int t,min,sum,flag1,flag2,equal;
    char str[3];
    scanf("%lld",&t);
    while(t--)
    {
        flag1=0;
        flag2=0;
        equal = INT_MAX;
        long long int n;
        scanf("%lld",&n);
        long long int temp=0,temp1=0,skill1=INT_MAX,skill2=INT_MAX;
        while(n--)
        {
            scanf("%lld %s",&min,str); 
            if(str[0]=='1' && str[1]=='1')
            {
                if(min<equal)
                equal = min;
                flag1++;
                flag2++;
            }           
            else if(str[0]=='1' && str[1]=='0')
            {
                temp = min;
                flag1++;
                if(temp<skill1)
                {
                    skill1=temp;
                }
            }            
            else if(str[0]=='0' && str[1]=='1')
            {
                temp1 = min;
                flag2++;
                if(temp1<skill2)
                {
                    skill2=temp1;
                }
            }
            else
            continue;
        }
        sum = skill1+skill2;
        if(flag1>0 && flag2>0)
        {
            if(equal<sum && equal!=0)
            sum = equal;
        }
        else
        sum = -1;
        printf("%lld\n",sum);
    }
    return 0;
}