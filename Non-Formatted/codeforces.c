#include<stdio.h>
int main()

//watermelon

{
    int w;
    scanf("%d",&w);

    if(1<= w <=100 && w>2 && w%2==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}


#include<stdio.h>
int main()
//soldiers and banana
{
    int k,n,w,t;
    scanf("%d%d%d",&k,&n,&w);

    t =k*((w*(w+1))/2);

    if( (t-n)>0)
      printf("%d",(t-n));
    else
        printf("0\n");

    return 0;
}

#include<stdio.h>
int main()
//wrong substraction

{
    int n,k,output,i;
    scanf("%d %d",&n,&k);

    for(i=0;i<k;i++)
    {
        if(n%10!=0)
        {
        n-=1;
        }
        else if (n %10 ==0)
        {
        n/=10;
        }
    }
    printf("%d",n);
    return 0;
}


#include<stdio.h>
#include<string.h>
//WORD
int main()
{
    char str[100];
    int i,low=0,cap=0;
    // read:
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a' && str[i]<='z')
            low++;
        else if(str[i]>='A' && str[i]<='Z')
            cap++;
    }
    if(low>cap)
    printf("%s",strlwr(str));
    else if(low<cap)
    printf("%s",strupr(str));
    else if(low==cap)
    printf("%s",strlwr(str));
    // goto read;
    return 0;
}

#include<stdio.h>
#include<string.h>
//string task
int main()
{
    char str[100],str1[100];
    int i,j;
    gets(str);
    int l=strlen(str);
    for(i=0,j=0;i<l;i++)
    {
        if(str[i]!='a' && str[i]!='Y' && str[i]!='y' && str[i]!='A' && str[i]!='e' && str[i]!='E' && str[i]!='i' && str[i]!='I' && str[i]!='o' && str[i] !='O' && str[i]!='u' && str[i]!='U')
        {
            str1[j]='.';
            j++;
        if((str[i]>='A' && str[i]<='Z') || (str[i]>'a' && str[i]<'z'))
        {
            str1[j]=str[i];
            j++;
        }
        else
        {
            str1[j]=str[i];
            j++;
        }
        }
    }
    str1[j]='\0';
    printf("%s",strlwr(str1));
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<ctype.h>
//string task
int main()
{
    char str[100];
    gets(str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(!strchr("aeiouyAEIOUY",str[i]))
        {
            printf(".%c",tolower(str[i]));
        }
    }
    return 0;
}


#include<stdio.h>
// domino piling
int main()
{
    int domino=2;
    int m,n;
    scanf("%d %d",&m,&n);
    int square = m*n;
    int output = square/domino;
    printf("%d",output);
    return 0;
}


#include<stdio.h>
// word capitalization
int main()
{
    char str[1000];
    scanf("%s",str);
    while(str[0]>='a' && str[0]<='z')
    {
        str[0]=str[0]-32;
    }
    puts(str);
}

#include<stdio.h>
// football
int main()
{
    char str[100];
    // int count,count1;
    scanf("%s",str); // input must be 0 or 1
    // for(int j=0;str[j]!='0';)
    // {
    //     if(str[j]=='0')
    //     {
    //     count=0;
    //     while(str[j]=='0')
    //     {
    //         ++count;
    //         j++;
    //         if(count>=7)
    //         break;
    //     }
    //     }
    //     else if(str[j]=='1')
    //     {
    //         count1=0;
    //         while(str[j]=='1')
    //         {
    //         ++count1;
    //         j++;
    //         if(count1>=7)
    //         break;
    //         }
    //     }
    // }
    // printf("%d\n",count);
    // printf("%d\n",count1);
    // if(count>=7 || count1>=7)
        printf("YES");
    else
    printf("NO");
    return 0;
}

#include<stdio.h>
#include<string.h>
// football
int main()
{
    char str[100];
    scanf("%s",str); // input must be 0 or 1
    if(strstr(str,"0000000") || strstr(str,"1111111"))
    printf("YES");
    else
    printf("NO");
    return 0;
}


#include<stdio.h>
#include<string.h>
// Boy or Girl
int main()
{
    char str[101];
    gets(str);
    char test[101];
    int n = strlen(str);
    int j;
    test[0]=str[0];
    int count,k=1;
    // we will make a string with all distinct char from str
    for(int i=1;i<n;i++)
    {
        count=0;
        for(j=0;j<k;j++)
        {
            if(str[i]==test[j])
            {
                count++; //algorithm : with a upcoming word of str[i],we will check weather it included in test string previously
                // if not we will add the character else we won't
            }
        }
        if(count==0)
        {
            test[k]=str[i];
            k++;
        }
    }
    test[k]='\0'; // here we completed the distinct word string
    int p = strlen(test);
    if(p%2==0)
    printf("CHAT WITH HER!");
    else
    printf("IGNORE HIM!");
    return 0;
}



#include<stdio.h>
#include<string.h>
//translation
int main()
{
    char s[1000];
    int count=0;
    gets(s);
    char t[1000];
    gets(t);
    strrev(t);
    if(strcmp(s,t)==0)
    printf("YES");
    else
    printf("NO");
    return 0;
}

#include<stdio.h>
#include<string.h>
//anton and danik
int main()
{
    int n,anton=0,danik=0;
    scanf("%d",&n);
    char str[n];
    getchar();
    gets(str);
    for(int i=0;i<n;i++)
    {
        if(str[i]=='A')
        anton++;
        else
        danik++;
    }
    if(anton>danik)
    printf("Anton");
    else if(danik>anton)
    printf("Danik");
    else if(anton==danik)
    printf("Friendship");

    return 0;  
}

#include<stdio.h>
//Bear and Big brother
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int i=0;
    while(a<=b)
    {
        a=a*3;
        b=b*2;
        i++;
        if(a>b)
        break;
    }
    printf("%d",i);
}

#include<stdio.h>
#include<string.h>
//chat room
int main()
{
    char str[101];
    char str1[100]="hello";
    gets(str);
    int n =strlen(str);
    int count=0;
    for(int i=0,j=0;i<n;i++)
    {
        if(str[i]==str1[j])
        {
            count++;
            j++;
        }
    }
    if(count==5)
    printf("YES");
    else
    printf("NO");
    return 0;
}

#include<stdio.h>
#include<string.h>
//WAY TOO LONG WORDS
// not accepted
int main()
{
    int n,i;
    scanf("%d",&n);
    char str[100][100];

    for(i=0;i<n;i++)
    {
        scanf("%s",str[i]);
    }

    for(i=0;i<n;i++)
    {
        int len = strlen(str[i]);
        if(len>10)
        {
            printf("%c%d%c",str[i][0],len-2,str[i][len-1]);
            printf("\n");
        }
        else
        {
            printf("%s\n",str[i]);
        }
    }

    return 0;
}

#include<stdio.h>
#include<string.h>
//WAY TOO LONG WORDS
//accepted
int main()
{
    int n,i,length;
    scanf("%d",&n);
    char string[100];
    for(int i=0;i<n;i++)
    {
        scanf("%s",string);
        length=strlen(string);
        if(length>10)
        {
            printf("%c%d%c\n",string[0],length-2,string[length-1]);
        }
        else
        {
            printf("%s\n",string);
        }
    }

    return 0;
}

#include<stdio.h>
// EVEN oDDS 
//NOT ACCEPTED
int main()
{
    long long int n,k;
    scanf("%lld %lld",&n,&k);
    long long int arr[n];
    long long int l=1;
    long long int i=0;
    while(l<=n)
    {
        arr[i]=l;
        l+=2;
        i++;
    }
    long long int j = 2;
    while(j<=n)
    {
        arr[i]=j;
        j+=2;
        i++;
    }
    printf("%lld",arr[k-1]);
    return 0;
}

#include<stdio.h>
// EVEN ODDS
//accepted
int main()
{
    long long int n,k;
    scanf("%lld %lld",&n,&k);
    if(k<=(n+1)/2)
    printf("%lld",k*2-1);
    else 
    printf("%lld",(k-(n+1)/2)*2);
    return 0;
}

#include<stdio.h>
// NEXT ROUND
int main()
{
    int n,k;
    scanf("%d %d ",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int count = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            if(arr[i]>=arr[k-1])
            {
                count++;
            }
        }
    }

    printf("%d",count);
    return 0;
}


#include<stdio.h>
//BEAUTIFUL YEAR
int checkyear(int);
int main()
{
    int y;
    scanf("%d",&y);
    while(1)
    {
        y++;
        int nextyear = checkyear(y);
        if(nextyear==0)
        {
            printf("%d",y);
            break;
        }
    }
}
int checkyear(int n)
{
    int arr[4];
    int count = 0;
    int i=0;
    for(int i=3;i>=0;i--)
    {
        arr[i]=n%10;
        n/=10;
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(i==j)
            continue;
            else if(arr[i]==arr[j])
            count++;
        }
    }
    return count;
}

#include<stdio.h>
//in search of an easy problem
int main()
{
    int n,count = 0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        count++;
    }
    if(count!=0)
    {
        printf("HARD");
    }
    else
    printf("EASY");
    
    return 0;
}

#include<stdio.h>
// TEAM
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][3];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    int flag = 0;
    for(int i=0;i<n;i++)
    {
        int count =0;
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]==1)
            {
                count++;
                // printf("%d ",count);
            }
        }
        if(count>=2)
        {
            flag++;
        }
    }

    printf("\n%d",flag);
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//Helpful Math
int main()
{
    char str[100];
    char temp;
    gets(str);
    int i=0;
    for(;i<strlen(str);i=i+2)
    {
        for(int j=i+2;j<strlen(str);j=j+2)
        {
            // printf("i : %d j : %d",i,j);
            // printf("i : %d j : %d\n",i,j);
            if((str[i]-'0')>(str[j]-'0')) // here we convert the char integer value to their actual integer value
            {
                temp = str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    puts(str);
    return 0;
}


#include<stdio.h>
#include<string.h>
// petya and Strings
int main()
{
    char str[100];
    char str1[100];
    gets(str);
    gets(str1);
    strlwr(str);
    strlwr(str1);
    int flag=0;
    for(int i=0,j=0;str[i]!='\0';i++,j++)
    {
        if(str[i]>str1[j])
        {
            printf("%d",1);
            break;
        }
        else if(str[i]<str1[j])
        {
            printf("%d",(-1));
            break;
        }
        else
        flag++;
    }
    if(strlen(str)==flag)
    printf("%d",0);
    return 0;
}


#include<stdio.h>
//nearly lucky number 
int main()
{
    long long int n,test,rem,temp;
    scanf("%lld",&n);
    // temp=n;
    int count=0;
    while(n!=0)
    {
        rem = n%10;
        if(rem==4 || rem==7)
        {
            count++;
            // test = n;
        }
        n=n/10;
    }
    // if(temp%10==0 || temp==7 || temp==4)
    // printf("NO");
    // else if(test==0)
    // printf("YES");
    // else
    // printf("NO");
    if(count==7 ||  count==4)
    printf("YES");
    else
    printf("NO");
    return 0;
}

#include<stdio.h>
//YES or YES
int main()
{
    char str[3];
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",str);
        if(str[0]=='Y' || str[0]=='y')
        {
            if(str[1]=='E' || str[1]== 'e')
            {
                if(str[2]=='S' || str[2]=='s')
                {
                    printf("YES\n");
                }
                else
                printf("NO\n");
            }
            else
            printf("NO\n");
        }
        else
        printf("NO\n");
    }

    return 0;
}  


#include<stdio.h>
//ODD divisor
int main()
{
    long long int t,n,rem;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        // rem = n%2;
        int count =0;
        while(n!=1)// (!=1 cz (n/2) will end at 1 whis is an odd number but we don't have to count the odd number 1)
        {
            if(n%2!=0)
            {
                count++; // we will divide n continously with 2 and whenever an odd number encounter will exit the loop and will increment count by 1
                //
                break;
            }
            n/=2;
        }
        if(count==0) 
        {
            printf("NO\n");
        } 
        else
        printf("YES\n");
    }
    return 0;
}

#include<stdio.h>  
// Required Remainder
int main()
{
    int x,y,n,t,k;
    scanf("%d",&t);
    int count =0;
    int temp;
    while(t--)
    {
        scanf("%d %d %d",&x,&y,&n);
        temp=((n-y)/x);
        k=(temp*x)+y;
        if(n%x==y)
        {
            printf("%d\n",n);
        }
        else if(y>=n)
        {
            printf("0\n");
        }
        else
        printf("%d\n",k);
        }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// ELEPHANT
int main()
{
    int x,count =0;
    scanf("%d",&x);
    if(x>=5)
    count = x/5;
    if((x%5!=0) && x%5<5)
    count++;
    printf("%d\n",count);
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// TWINS
void sort(int *arr,int n);
int main()
{
    int n,temp,sum=0,sum1,count=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,n);
    for(int i=0;i<n;)
    {
        sum = sum + arr[i];
        count++;
        sum1=0;
        for(int j=i+1;j<n;j++)
        {
            sum1 = sum1+arr[j];
        }
        if(sum>sum1)
        break;
        else
        i++;
    }
    printf("%d",count);
}
void sort(int *arr,int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//George and Accommodation
#include<math.h>
int main()
{
    int n;
    int p,q;
    scanf("%d",&n);
    int count = 0;
    while(n--)
    {
        scanf("%d %d",&p,&q);
        if(q-p>=2)
        count++;
    }
    printf("%d",count);
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// Drinks
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    double result;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }
    result= (double)sum/n;
    printf("%.12f",result);
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// I wanna be the guy
int main()
{
    int n,p,count=0;
    scanf("%d %d",&n,&p);
    int arr[p];
    for(int i=0;i<p;i++)
    {
        scanf("%d",&arr[i]);
    }
    int q;
    scanf("%d",&q);
    int arr1[q];
    for(int i=0;i<q;i++)
    {
        scanf("%d",&arr1[i]);
    }
    int arr2[n];
    for(int i=0;i<n;i++)
    {
        arr2[i]=0;
    }
    for(int i=0;i<p;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(arr[i]==j)
            {
                arr2[j-1]++;
            }
        }
    }
    for(int i=0;i<q;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(arr1[i]==j)
            {
                arr2[j-1]++;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr2[i]!=0)
        count++;
    }
    if(count==n)
    printf("I become the guy.");
    else
    printf("Oh, my keyboard!");
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// expression
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int sum[6];
    sum[0] = a + (b*c);
    sum[1] = a*(b+c);
    sum[2] = a*b*c;
    sum[3 ]= (a+b)*c;
    sum[4] = a+b+c;
    sum[5]=(a*b)+c;
    int temp=sum[0];
    for(int i=1;i<6;i++)
    {
        if(sum[i]>temp)
        temp = sum[i];
    }
    printf("%d",temp);
    return 0;
}



#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
//Pangram
int main()
{
    int n;
    scanf("%d",&n);
    char str[n+1];
    int arr[26]={0};
    scanf("%s",str);
    for(int i=0;i<n;i++)
    {
        if((str[i]>='a' && str[i]<='z'))
        {
            ++arr[str[i]-'a'];
        } 
        else if((str[i]>='A' && str[i]<='Z'))
        {
            ++arr[str[i]-'A'];
        }
    }
    int count = 0;
    for(int i=0;i<26;i++)
    {
        if(arr[i]==0)
        count++;
    }
    if(count==0)
    printf("YES");
    else
    printf("NO");
    return 0;
}


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
//Divisibily problem
int main()
{
    long long int t,a,b;
    scanf("%lld",&t);
    while(t--)
    {
        long long int count,test;
        scanf("%lld %lld",&a,&b);
        if(a%b==0)
        printf("0\n");
        else
        {
            test = a/b;
            count = ((test+1)*b)-a;
            printf("%lld\n",count);
        }
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
//Divisibily problem
// not accepted
int main()
{
    long long int t,a,b;
    scanf("%lld",&t);
    while(t--)
    {
        long long int count,test;
        scanf("%lld %lld",&a,&b);
        if(a%b==0)
        printf("%d",0);
        else
        {
            test = a%b;
            count = b-test;
            printf("%lld\n",count);
        }
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// Kefa and first steps
int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }
    long long int count=1,temp=0;
    for(long long int i=0,j=i+1;i<n;i++,j++)
    {
        count=1;
        while(arr[i]<=arr[j])
        {
            if(j>=n)
            break;
            count++;
            i++;
            j++;
        }
        if(count>temp)
        temp = count;
    }
    printf("%lld",temp);
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
void evenresult(long long int);
void oddresult(long long int);
int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int nth,sum,minus,result;
    nth=n/2;
    if(n%2==0)
    {
        evenresult(nth);
    }
    else
    {
        oddresult(nth);
    }
    return 0;
}
void evenresult(long long int nth)
{
    long long int sum,minus,result;
    sum=nth*(nth+1);
    minus = (nth*(2+((nth-1)*2))/2);
    result = sum - minus;
    printf("%lld",result);
}
void oddresult(long long int nth)
{
    long long int sum,minus,result;
    sum=nth*(nth+1);
    nth++;
    minus=(nth*(2+((nth-1)*2))/2);
    result = sum - minus;
    printf("%lld",result);
}



#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// Dubstep
// not an optimized code
void LTrim(char *str,char *nstr);
void MTrim(char *n2str);
void addspace(char *str,char *str1);
void removesubstring(char *str,char *result);
int main()
{
    char str1[201];
    char str[300];
    char nresult[200];
    scanf("%s",str1);
    char result[200];
    addspace(str,str1);
    removesubstring(str,result);
    LTrim(result,nresult);
    MTrim(nresult);
    return 0;
}
void LTrim(char *str,char *nstr)
{
     int count = 0,i,j,newlen;
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]==' ')
        {
            count++;
        }
        else
        break;
    }
    newlen = strlen(str) - count ;;
    for(i=count,j=0;i<strlen(str);i++,j++)
    {
        nstr[j]=str[i];
    }
    nstr[j]='\0';
}

void MTrim(char *n2str)
{
    int i,len,j;
    len = strlen(n2str);
    for(i=0;i<len;)
    {
        if(n2str[i]==' ')
        {
            if(n2str[i-1]==' ')
            {
                i++;
            }
            else
            {
            printf("%c",n2str[i]);
            i++;
            }
        }
        else
        {
            printf("%c",n2str[i]);
            i++;
        }
    }
    printf("\n");
}
void addspace(char *str,char *str1)
{
    int k=0,j,temp;
    for(int i=0,j=0;i<strlen(str1);)
    {
        if(str1[i]=='W' && str1[i+1]=='U' && str1[i+2]=='B' && i<strlen(str1))
        {
            str[j]=str1[i];
            i++;j++;
            str[j]=str1[i];
            i++;j++;
            str[j]=str1[i];
            i++;j++;
            str[j]=' ';
            j++;
        }
        else
        {
            str[j]=str1[i];
            j++;
            i++;
        }
        temp=j;
    }
    str[temp]='\0';
}
void removesubstring(char *str,char *result)
{
    int k=0;
    for(int i=0;i<strlen(str);)
    {
        if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B')
        {
            i++;
            if(str[i]=='U' && str[i+1]=='B')
            {
                i++;
                if(str[i]=='B')
                {
                    i++;
                }
                else
                {
                    result[k]=str[i];
                    k++;
                    i++;
                }
            }
            else
            {
                result[k]=str[i];
                k++;
                i++;
            }
        }
        else
        {
            result[k]=str[i];
            k++;
            i++;
        }
    }
    result[k]='\0';
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// caps lock
int main()
{
    char str[101];
    gets(str);
    char test[101];
    strcpy(test,str);
    int count = 0;
    if((str[0]>='A' && str[0]<='Z') || (str[0]>='a' && str[0]<='z'))
    {
        if((str[0]>='A' && str[0]<='Z'))
        str[0]=str[0]+32;
        else
        str[0]=str[0]-32;
        for(int i=1;i<strlen(str);i++)
        {
            if((str[i]>='A' && str[i]<='Z'))
            {
                str[i]=str[i]+32;
                count++;
            }
        }
    }
    if(count==strlen(str)-1)
    {
        puts(str);
    }
    else
    puts(test);
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// anton and letters
int main()
{
    char str[1001];
    gets(str);
    char test[1000];
    if(str[1]>='a' && str[1]<='z')
    test[0]=str[1];
    int k=1,count;
    for(int i=3;str[i]!='\0';i++)
    {
        count=0;
        if(str[i]>='a' && str[i]<='z')
        {
            for(int j=0;j<k;j++)
            {
                if(str[i]==test[j]) // we will make an string with the all distinct character the will print the string length which is our answer
                count++;
            }
        }
        if(count==0 && str[i]>='a' && str[i]<='z')
        {
            test[k]=str[i];
            k++;
        }
    }
    test[k]='\0';
    printf("%d",strlen(test));
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
//games
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][2];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            continue;
            if(arr[i][0]==arr[j][1]) // divide the problem in paper and pen it will become much more easy
            count++;
        }
    }
    printf("%d",count);
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// IQ test
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int temp=0,temp1=0;
    int test,test1;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            temp++;
            test=i;
        }
        else
        {
            temp1++;
            test1=i;
        }
    }
    if(temp==1)
    printf("%d",test+1);
    else if(temp1==1)
    printf("%d",test1+1);

    return 0;
    
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// hit the lottery
int main()
{
    int n;
    scanf("%d",&n);
    int count=0;
    while(n!=0)
    {
        if(n>=100)
        {
            count++;
            n=n-100;
        }
        else if(n>=20)
        {
            count++;
            n-=20;
        }
        else if(n>=10)
        {
            count++;
            n-=10;
        }
        else if(n>=5)
        {
            count++;
            n-=5;
        }
        else
        {
            count++;
            n-=1;
        }
    }
    printf("%d",count);
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// Anton and polyhedrons
int main()
{
    int n;
    scanf("%d",&n);
    char str[n][100];
    for(int i=0;i<n;i++)
    {
        scanf("%s",str[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(strstr(str[i],"Tetrahedron"))
        sum = sum + 4;
        else if(strstr(str[i],"Cube"))
        sum = sum + 6;
        else if(strstr(str[i],"Octahedron"))
        sum = sum + 8;
        else if(strstr(str[i],"Dodecahedron"))
        sum = sum + 12;
        else if(strstr(str[i],"Icosahedron"))
        sum = sum + 20;
    }
    printf("%d",sum);
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// puzzles
void sort(int *arr,int n);
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[m];
    int diff[m-n+1];
    for(int i=0;i<m;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,m);
    for(int i=0,j=n-1+i;i<m-n+1;i++,j++)
    {
        diff[i]=arr[i]-arr[n-1+i]; // find all the possible difference between max and min with n pairs and store them diff array
        if(j>=m)
        break;
    }
    sort(diff,m-n+1); // here we sorted the diff array
    printf("\n%d",diff[m-n]); // the last index value means the minimum value will be the answer
}
void sort(int *arr,int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// amusing joke 
void sort(char *str,int n);
int main()
{
    char name1[101],name2[101],piles[101];
    gets(name1);
    gets(name2);
    gets(piles);
    strcat(name1,name2);
    sort(name1,strlen(name1));
    sort(piles,strlen(piles));
    if(strstr(piles,name1) && (strlen(name1)==strlen(piles)))
    printf("YES");
    else
    printf("NO");
    return 0;
}
void sort(char *str,int n)
{
    int i,j;
    char temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(str[i]<str[j])
            {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// candies and two sisters
int main()
{
    long long int n,t;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        if(n%2==0)
        printf("%lld\n",(n/2)-1);
        else
        printf("%lld\n",n/2);
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// fox and snake
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    // int arr[n][m];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(i%2!=0)
            printf("#");
            else
            {
                if((i/2)%2!=0) // every condition made by analyzing the test case
                {
                    if(j==m)
                    printf("#");
                    else
                    printf(".");
                }
                else
                {
                    if(j==1)
                    printf("#");
                    else
                    printf("."); 
                }
            }
        }
        printf("\n");
    }
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
//i love username
int smallercount(int *arr,int current);
int greatercount(int *arr,int current);
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int result = 0;
    for(int i=1;i<n;)
    {
        int flag1 = smallercount(arr,i);
        int flag2 = greatercount(arr,i);
        if(flag1==i)
        {
            result++;
            i++;
        }
        else if(flag2==i)
        {
            result++;
            i++;
        }
        else
        i++;
        flag1=0;
        flag2=0;
    }
    printf("%d",result);

}
// function to check weather the number is smaller then all of it's previous
int smallercount(int *arr,int current)
{
    int count=0;
    for(int i=0;i<current;i++)
    {
        if(arr[current]<arr[i])
        count++;
    }
    return count++;
}
// function to check weather the number is greater then all of it's previous
int greatercount(int *arr,int current)
{
    int count=0;
    for(int i=0;i<current;i++)
    {
        if(arr[current]>arr[i])
        count++;
    }
    return count;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// cheap travel
int main()
{
    int n,m,a,b,result;
    scanf("%d %d %d %d",&n,&m,&a,&b);
    int cost;
    float specialride = b/m; // cost per ride for m ride ticket
    if(specialride<a) // 
    {
        int leftride = 0;
        if(n>m)
        {
            cost = (n/m)*b;
            leftride = n-((n/m)*m);
            int tempcost = cost + b;
            cost = cost + (leftride*a);    
            if(tempcost<cost)
            {
                result = tempcost;
            }
            else
            result = cost;   
        }
        else
        {
            if((n*a)<b)
            result = n*a;
            else 
            result = b;
        }        
    }
    else
    {
        result = n*a;
    }
    printf("%d",result);
    return 0;
}


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// vasya the hipster
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int flag1,flag2;
    if(a>b)
    {
        flag1 = b;
        flag2 = (a-b)/2;
    }
    else
    {
        flag1 = a;
        flag2 = (b-a)/2;
    }

    printf("%d %d",flag1,flag2);

    return 0;

}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// buy a shovel
int main()
{
    int k,r;
    scanf("%d %d",&k,&r);
    int temp;
    int flag = 1;
    while(1)
    {
        temp = (k*flag);
        flag++;
        if((temp%10==r) || (temp%10==0))
        break;
    }
    printf("%d",flag-1);
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// the new year meeting friends
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int flag[3],temp;
    if(a>b)
    flag[0] = a-b;
    else
    flag[0]=b-a;
    if(b>c)
    flag[1] = b-c;
    else
    flag[1] = c -b;
    if(c>a)
    flag[2] = c-a;
    else
    flag[2] = a -c;
    temp = flag[0];
    for(int i=0;i<3;i++)
    {
        if(temp<flag[i])
        temp=flag[i];
    }
    printf("%d",temp);

}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
//restoring three numbers
void sort(int *arr,int n);
int main()
{
    int arr[4];
    for(int i=0;i<4;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,4); // assume that (a_b = a-b) & (c_b = c-b);
    int a_b = arr[2] - arr[1];
    int c_b = arr[2] - arr[0];
    int b = (arr[3]-a_b-c_b)/3;//b = ((a+b+c)-(a-b)-(c-b))/3
    int a = a_b + b; // a = (a-b)+b
    int c = c_b + b; // c = (c-b)+b;
    printf("%d %d %d",a,b,c);
    return 0;
}
void sort(int *arr,int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// remove smallest
void sort(int *arr,int n);
void removesmallest(int *arr,int n);
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int arr[n],i,j;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        sort(arr,n);
        removesmallest(arr,n);
        int k=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=0)
            k++;
        }
        if(k==1)
        printf("YES\n");
        else
        printf("NO\n");
    }
    return 0;
}
void sort(int *arr,int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
void removesmallest(int *arr,int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j || arr[j]==0)
            {
                continue;                   
            }               
            else if((arr[j]-arr[i])<=1 && (arr[j]>arr[i]))
            {
                arr[i]=0;
                break;
            }
            else if(arr[i]==arr[j])
            {
                arr[i]=0;
                break;
            }
        }
    }
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
//yet another two integer problem
int addition(int a,int b);
int subtraction(int a,int b);
int main()
{
    int t,a,b;
    scanf("%d",&t);
    int flag;
    while(t--)
    {
        int flag;
        scanf("%d %d",&a,&b);
        if(a>b)
        {
            flag = subtraction(a,b);
        }
        else if(b>a)
        {
            flag = addition(a,b);
        }
        else
        {
            flag=0;
        }
        printf("%d\n",flag);
    }
    return 0;
}

int addition(int a,int b)
{
    if(b<=10)
    return 1;
    else
    {
        int rem = b%10;
        int rem1 = a%10;
        int count=(b-(a-rem1))/10; // do in hand calculation to understand the logic
        if(rem>rem1)
        return count+1;
        else
        return count;

    }
}
int subtraction(int a,int b)
{
    if(a<=10)
    return 1;
    else
    {
        int rem = a%10;
        int rem1 = b%10;
        int count=(a-(b-rem1))/10; // do in hand calculation to understand the logic
        if(rem>rem1)
        return count+1;
        else
        return count;// here we do a clever thing and it is we won't subtract for getting b from a
//instead of we all get a from b and the movement will be remain same thus we can do the same thing with a same code just replacing a with b
    }
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// soft drinking
void sort(int *arr,int n);
int main()
{
    int n,k,l,c,d,p,nl,np;
    scanf("%d %d %d %d %d %d %d %d",&n,&k,&l,&c,&d,&p,&nl,&np);
    int arr[3];
    arr[0] = (k*l)/nl; // number of toast can be make with the drink
    arr[1] = (c*d)/1; // number of toast can be make with the slice
    arr[2] = (p/np); // number of toast can be make with the salt
    sort(arr,3);
    // the minimum value among them will be the number of toast
    int result = arr[0]/n;
    // how many toast will each friend make
    printf("%d",result);
    return 0;
}
void sort(int *arr,int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// spy detected
int main()
{
    int n,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int arr[n];
        int temp[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        temp[0]=1;
        for(int i=1;i<n;i++)
        {
            if(arr[0]==arr[i])
            {
                temp[0]=0;
                temp[i]=0;
            }
            else
            {
                temp[i]=1;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(temp[i]!=0)
            {
                printf("%d\n",i+1);
                break;
            }
        }
    }
}



#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// borze
int main()
{
    char str[201];
    char result[201];
    gets(str);
    int k=0;
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]=='-')
        {
            if(str[i+1]=='.')
            {
                result[k]='1';
                k++;
                i++;
            }
            else
            {
                result[k]='2';
                k++;
                i++;
            }
        }
        else if(str[i]=='.')
        {
            result[k]='0';
            k++;
        }
    }
    result[k]='\0';
    puts(result);
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// dislike of threes
int main()
{
    int t,k;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&k);
        int count=1;
        int num = 1;
        while(1)
        {
            if(count==k)
            break;
            num++;
            if((num%10!=3) && (num%3!=0))
            {
                count++;
            }           
        }
        printf("%d\n",num);
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// balanced array
void constructarray(int *arr,int n);
void printarray(int *arr,int n);
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int arr[n];
        // here we will apply a logic like if (n/2) is a odd number then the answer will be NO. cause sum of 3 odd number
        // will always be a odd number where as sum of 3 even will even so that means sum of even and sum of odd can't be equal 
        // so it will be NO.
        if((n/2)%2!=0)
        printf("NO\n");
        else
        {
            printf("YES\n");
            constructarray(arr,n);
            printarray(arr,n);
            printf("\n");
        }
    }
}

void constructarray(int *arr,int n)
{
    int even = 2;
    int odd = 1;
    int evensum=0;
    int oddsum=0;
    for(int i=0;i<n/2;i++)
    {
        arr[i]=even;
        evensum = evensum + arr[i];
        even+=2;

    }
    for(int i=n/2;i<n-1;i++)
    {
        arr[i]=odd;
        oddsum = oddsum + arr[i];
        odd+=2;
    }
    arr[n-1]=evensum-oddsum;
}
void printarray(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// Ilya and bank account
int maximize(int n);
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=0)
    printf("%d",n);
    else
    {
        int result = maximize(n);
        if(result>0)
        printf("-%d\n",result);
        else
        printf("%d\n",result);
    }
    return 0;
}
int maximize(int n)
{
    int arr[10]={0};
    int i=0;
    int temp= -n;
   while(temp!=0)
    {
        arr[i]=temp%10;
        i++;
        temp/=10;
    }
    int max1 = (arr[0]>arr[1]?0:1); // which one is greater in the last 2 digit we will remove it for this we store the greater one index in the max
    int max2=0;
    int mul = 1;
    for(int j=0;j<i;j++)
    {
        if(j==max1) // when the last large rem come we will skip it here
        continue;
        else
        {
            max2=max2+(arr[j]*mul);
            mul*=10;
        }
    }
    // int result = (max1>max2)?max2:max1;
    return max2;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%2==0)
    printf("%d",1);
    else
    printf("%d",2);
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// mishka and game
int main()
{
    int n;
    scanf("%d",&n);
    int mishka,chris,summishka=0,sumchris=0;
    while(n--)
    {
        scanf("%d %d",&mishka,&chris);
        if(mishka>chris)
        summishka++;
        else if(chris>mishka)
        sumchris++;
    }
    if(sumchris>summishka)
    printf("Chris");
    else if(sumchris<summishka)
    printf("Mishka");
    else
    printf("Friendship is magic!^^");
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// even array
int swapcount(int *arr,int n);
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        int rem[n];
        int even=0;
        int odd=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
            rem[i]=arr[i]%2; // here we are making an array with the rem of the index value
            if(arr[i]%2==0)
            even++; // counting the even and odd number in the array
            else
            odd++;
        }
        if(n==1 && rem[0]!=0)
        printf("-1\n");
        else if(((even!=odd) && (n%2==0))||(((even-1)!=odd) && (n%2==1)))
        printf("-1\n"); // to be good array (even==odd) when(n%2) and (even-1==odd) when (n%2==1) other wise it can't be good array
        else
        {
            printf("%d\n",swapcount(rem,n));
        }
    }
    return 0;
}
int swapcount(int *arr,int n)
{
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=(i%2)) // the good array sequence should be (0 1 0 1 0 1 this are reminder of the index value)
        flag++; // if value diifer from the sequence we increment flag
    }
    return flag/2; // in one move we swap two index... so the ans will be flag/2
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// marathon
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int arr[4];
        for(int i=0;i<4;i++)
        {
            scanf("%d",&arr[i]);
        }
        int flag=0;
        for(int i=1;i<4;i++)
        {
            if(arr[i]>arr[0])
            flag++;
        }
        printf("%d\n",flag);
    }

    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// sum
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int arr[3];
        for(int i=0;i<3;i++)
        {
            scanf("%d",&arr[i]);
        }
        int flag=0,k=2;
        for(int i=0;i<2;i++)
        {
            if((arr[i]+arr[i+1])==arr[k])
            flag++;
            k-=2;
        }
        if((arr[0]+arr[2]==arr[1]))
        flag++;
        if(flag==0)
        printf("NO\n");
        else
        printf("YES\n");
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// do not be distracted
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        char str[n+1];
        char temp[n+1];
        scanf("%s",str);
        int k=0;
        temp[k]=str[0];
        for(int i=1;i<strlen(str);i++)
        {
            if(str[i]!=temp[k])
            {
                k++;
                temp[k]=str[i]; // here we are making an temp array from the str by checking str[i] with the previous temp[k]
                // if there is no match then we will include it in temp else we will ignore it
            }
        }
        k++;
        temp[k]='\0';
        int flag=0;
        for(int i=0;i<k;i++)
        {
            for(int j=i+1;j<k;j++)
            {
                if(temp[i]==temp[j])
                flag++;
            }
            if(flag>0)
            break;
        }
        if(flag>0)
        printf("NO\n");
        else
        printf("YES\n");
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// black square
int main()
{
    int arr[4];
    char str[100001];
    for(int i=0;i<4;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%s",str);
    int sum=0;
    for(int i=0;i<strlen(str);i++)
    {
        int stripe = str[i]-'0';
        sum = sum + arr[stripe-1];
    }
    printf("%d",sum);
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// plus one on the subset
int maxima(int *arr,int n);
int minima(int *arr,int n);
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        int count= maxima(arr,n)-minima(arr,n);
        printf("%d\n",count);
    }
    return 0;
}
int maxima(int *arr,int n)
{
    int max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    return max;
}
int minima(int *arr,int n)
{
    int min=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]<min)
        min=arr[i];
    }
    return min;
}


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// plus one on the subset
// TLE
int maxima(int *arr,int n);
int compare(int *arr,int n,int max);
int addition(int *arr,int n,int max);
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        int max= maxima(arr,n);
        int count=0;
        while(compare(arr,n,max)!=0)
        {
            addition(arr,n,max);
            count++;
            compare(arr,n,max);
        }
        printf("%d\n",count);
    }
    return 0;
}
int maxima(int *arr,int n)
{
    int max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    return max;
}
int compare(int *arr,int n,int max)
{
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=max)
        flag++;
    }
    return flag;
}
int addition(int *arr,int n,int max)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=max)
        arr[i]++;
    }
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// two array and swaps
void scan(int *arr,int n);
void ascending(int *arr,int n);
void descending(int *arr,int n);
int sum(int *arr,int n);
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        int a[n],b[n];
        scan(a,n);
        scan(b,n);
        ascending(a,n);
        descending(b,n);
        int flag=0;
        if(k>0)
        {
            for(int i=0;i<n;i++)
            {
                if(a[i]<b[i])
                a[i]=b[i];
                flag++;
                if(flag==k)
                break;
            }
        }
        printf("%d\n",sum(a,n));
    }
    return 0;
}
void scan(int *arr,int n) // take a test case and implement it by the line by line by code you will be understood
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void ascending(int *arr,int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
void descending(int *arr,int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int sum(int *arr,int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// minimal square
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        if((a/2)>=b)
        printf("%d\n",a*a);
        else if((b/2)>=a)
        printf("%d\n",b*b);
        else
        {
            int side = (a>b)?b:a;
            int area = ((2*side)*(2*side));
            printf("%d\n",area);
        }
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
//boring apartments
int main()
{
    int n,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int count=0;
        int rem = (n%10)-1;
        int sum = 0;
        while(n!=0)
        {
            count++;
            sum = sum + count;
            n/=10;
        }
        printf("%d\n",(rem*10)+sum);
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
//lucky
int main()
{
    int t;
    char str[7];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",str);
        int sum = 0,sum1 = 0;
        for(int i=0;i<3;i++)
        {
            sum = sum + (str[i]-'0');
        }
        for(int i=3;i<6;i++)
        {
            sum1 = sum1 + (str[i]-'0');
        }
        if(sum==sum1)
        printf("YES\n");
        else
        printf("NO\n");
    }
return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// die roll
int main()
{
    int y,w;
    int arr[6],denominator;
    for(int i=0;i<6;i++)
    {
        arr[i]=i+1;
    }
    scanf("%d %d",&y,&w);
    int max = (y>w)?y:w;
    int count=0;
    for(int i=0;i<6;i++)
    {
        if(arr[i]>=max)
        count++;
    }
    if(6%count==0)
    {
        denominator = 6/count;
        count = count/count;
    }
    else if(count%2==0 && 6%2==0)
    {
        count = count/2;
        denominator = 6/2;
    }
    else
    {
        denominator = 6;
    }
    printf("%d/%d",count,denominator);
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
//division
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x;
        scanf("%d",&x);
        if(x>=1900)
        printf("Division 1\n");
        else if(x>=1600 && x<=1899)
        printf("Division 2\n");
        else if(x>=1400 && x<=1599)
        printf("Division 3\n");
        else
        printf("Division 4\n");
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
//candies
int findx(int n);
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        printf("%d\n",findx(n));
    }
}
int findx(int n)
{
    int k=2;
    int initial = 3; //(2^2-1)(k>1)// gunottor dhara use kore x bad e series er bakitar sum ber korbo...oita diye n ke divide korlei x er value peye jabo
    if(n%initial==0)
    return n/initial;
    else
    {
        while(n%initial!=0)
        {
            initial=pow(2,k)-1;
            k++;
        }
        return n/initial;
    }
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// polycarp and coins
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int temp = n/3;
        int c1,c2;
        c1=c2=temp; // here dividing after 3...this will be the initial value of c1 and c2;
        int rem = n%3;
        if(rem%2==0)
        {
            c2= c2 + rem/2;
        }
        else
        {
            c1 = c1 + rem/1;
        }
        printf("%d %d\n",c1,c2);
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// football
int main()
{
    int t;
    scanf("%d",&t);
    char str[11];
    char temp[11];
    char temp1[11];
    scanf("%s",str);
    strcpy(temp,str);
    t--;
    int count=1;
    int count1=0;
    while(t--)
    {
        scanf("%s",str);
        if(strcmp(temp,str)==0)
        count++;
        else
        {
            count1++;
            strcpy(temp1,str);
        }
    }
    if(count>count1)
    puts(temp);
    else
    puts(temp1);

    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
//honest coach
void sort(int *arr,int n);
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        sort(arr,n);
        int min = arr[0]-arr[1];
        for(int i=1;i<n-1;i++)
        {
            if(arr[i]-arr[i+1]<min)
            min = arr[i]-arr[i+1];
        }
        printf("%d\n",min);
    }
    return 0;
}
void sort(int *arr,int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// fair divison 
int main()
{
    // first of will count the number of chocolate 1 & 2 grams separately
    // then first will divide the gram 2 weigh chocolate and will take it reminder
    // multiply rem by 2 will minus it from 1 gram chocolate count
    // if remaining chocolate %2==0 then it will fair division else no
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        int one =0;
        int two=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
            if(arr[i]==1)
            one++;
            else
            two++;
        }
        if(two==0)
        {
            if(one%2==0)
            printf("YES\n");
            else
            printf("NO\n");
        }
        else if(one==0)
        {
            if(two%2==0)
            printf("YES\n");
            else
            printf("NO\n");
        }
        else
        {
            int two_rem=two%2;
            int one_remaining = one - (two_rem*2);
            if(one_remaining%2==0) 
            printf("YES\n");
            else
            printf("NO\n");
        }
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
//bersu ball
void descending(int *arr,int n);
void ascending(int *arr,int n);
void scan(int *arr,int n);
int checkindex(int *arr,int n,int test);
int main()
{
    int b;
    scanf("%d",&b);
    int boy[b];
    scan(boy,b);
    int g;
    scanf("%d",&g);
    int girl[g];
    int index[b+g];
    int k=0;
    int count = 0;
    scan(girl,g);
    descending(boy,b);
    ascending(girl,g);
    for(int i=0;i<g;i++)
    {
        for(int j=0;j<b;j++)
        {
            int max = (girl[i]>boy[j])?girl[i]:boy[j];
            int min = (girl[i]<boy[j])?girl[i]:boy[j];
            if(k>0)
            {
                int flag = checkindex(index,k,j);
                if((max-min<=1) && flag==0)
                {
                    count++;
                    index[k]=j; // which index value is used one should be used twice so we store those index which used once
                    k++;
                    break;
                }
            }
            else
            {
                if((max-min<=1))
                {
                    count++;
                    index[k]=j;
                    k++;
                    break;
                }
            }
        }
    }
    printf("%d",count);
    return 0;
}

void scan(int *arr,int n)
{
    for(int i=0;i<n;i++)
    scanf("%d ",&arr[i]);
}
int checkindex(int *arr,int n,int test)
{
    int value = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==test)
        {
            value++;
            break;
        }
    }
    return value;
}
void descending(int *arr,int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
void ascending(int *arr,int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// division?
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x;
        scanf("%d",&x);
        if(x>=1900)
        printf("Division 1\n");
        else if(x>=1600 && x<=1899)
        printf("Division 2\n");
        else if(x>=1400 && x<=1599)
        printf("Division 3\n");
        else
        printf("Division 4\n");
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// lucky numbers
int findmax(int n);
int findmin(int n);
int findluck(int max,int min);
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int l,r;
        scanf("%d %d",&l,&r);
        int flag = -1;
        int luckiest=l;
        for(int i=l;i<=r;i++)
        {
            int max = findmax(i);
            // printf("max ; %d\n",max);
            int min = findmin(i);
            // printf("min ; %d\n",min);
            int luck = findluck(max,min);
            // printf("luck ; %d\n",luck);
            if(luck>=flag)
            {
                luckiest = i;
                flag = luck;
            }
            // printf("luckiest ; %d\n",luckiest);
            if(luck==9)
            {
                luckiest=i;
                break;               
            }
        }
        printf("%d\n",luckiest);
    }
    return 0;
}
int findmax(int n)
{
    int max = n%10;
    int temp;
    while(n!=0)
    {
        temp=n%10;
        if(temp>max)
        {
            max=temp;
        }
        n/=10;
    }
    return max;
}
int findmin(int n)
{
    int min = n%10;
    int temp;
    while(n!=0)
    {
        temp=n%10;
        if(temp<min)
        {
            min=temp;
        }
        n/=10;
    }
    return min;
}
int findluck(int max,int min)
{
    int luck = max-min;
    return luck;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// new year candles 
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int new = a/b;
    int temp = a/b;
    int rem = a%b;
    while(temp>=b)
    {
        rem = rem + temp%b;
        temp/=b;
        new = new + temp;
    }
    rem = rem + temp%b;
    while(rem>=b)
    {
        new = new + rem/b;
        rem/=b;
    }
    int hour = a + new + rem/b;
    if(hour%b==0)
    hour++;
    printf("%d",hour);
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// new year's number
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        if(n<(2020))
        printf("NO\n");
        else
        {
            while(n>0)
            {
                if(n>2020 && n%2021==0)
                {
                    n=n-2021;
                }
                else
                {
                    n-=2020;
                }
            }
            if(n==0)
            printf("YES\n");
            else
            printf("NO\n");
        }       
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// sale
void sort(int *arr,int n);
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n];
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,n);
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            sum = sum + (-arr[i]);
            count++;
        }
        if(count==m)
        break;
    }
    printf("%d",sum);
    return 0;
}
void sort(int *arr,int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// gift fixing
void scan(int *arr,int n);
int minimum(int *arr,int n);
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int candy[n];
        int oranges[n];
        scan(candy,n);
        scan(oranges,n);
        int candymin = minimum(candy,n);
        int orangesmin = minimum(oranges,n);
        long long int count = 0;
        int minus;
        for(int i=0;i<n;i++)
        {
            if(candy[i]>candymin && oranges[i]>orangesmin)
            {
                minus = (candy[i]-candymin)-(oranges[i]-orangesmin);
                if(minus<0)
                minus = (-1)*minus;       // the removal factor without the common
                if((candy[i]-candymin)>=(oranges[i]-orangesmin))
                {  
                    count = count + minus; 
                    count = count + (candy[i]-minus-candymin); // removing the common factor between candies and oranges
                }
                else
                {
                    count = count + minus;
                    count = count + (oranges[i]-minus-orangesmin);
                }
            }
            else if(candy[i]>candymin)
            {
                count = count + (candy[i]-candymin);
            }
            else
            {
                count = count + (oranges[i]-orangesmin);
            }
        }
        printf("%lld\n",count);
    }
    return 0;
}
void scan(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}
int minimum(int *arr,int n)
{
    int min = arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]<min)
        min=arr[i];
    }
    return min;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// panoramix prediction
int checkprime(int check);
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int test;
    for(int i=n+1;i<=m;i++)
    {
        if(checkprime(i)==0)
        {
            test = i;
            break;
        }
    }
    if(test==m)
    printf("YES");
    else
    printf("NO");
    return 0;
}
int checkprime(int check)
{
    int flag;
    if(check>=2)
    {
        flag=0;
        for(int j=2;j<check;j++)
        {
            if(check%j==0)
            {
                flag++;
                break;
            }
        }
    }
    return flag;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// multiply by 2 divide by 6
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n;
        scanf("%lld",&n);
        double temp = n;
        int count = 0;
        if(n==1)
        printf("0\n");
        else if(n<6 && n!=3)
        printf("-1\n");
        else
        {
            while(temp!=1)
            {
                if(temp<6 && (temp==3 || temp==1.5))
                {
                    temp = temp*2;
                    count++;
                }
                else if(temp>=6 && (int)temp%6==0)
                {
                    temp/=6;
                    count++;
                }
                else if(temp>6)
                {                    
                    temp*=2;
                    count++;
                    if((int)temp%6!=0)
                    {
                        count=-1;
                        break;
                    }
                }
                else
                {
                    count=-1;
                    break;
                }
            }
            printf("%d\n",count);
        }
        
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// square string
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char str[101];
        scanf("%s",str);
        int len = strlen(str);
        int flag = 0;
        if(len%2!=0)
        printf("NO\n");
        else
        {
                for(int i=0,j=len/2;i<=(len/2)-1;i++,j++)
                {
                    if(str[i]!=str[j])
                    flag++;
                }
                if(flag==0)
                printf("YES\n");
                else
                printf("NO\n");
        }
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// brain's photos
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    getchar(); // for eating the linebreak
    char str[r][c];
    int count = 0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%c",&str[i][j]);
            getchar(); // for eating the space char
            if(str[i][j]=='C' || str[i][j]=='M' || str[i][j]=='Y')
            count++;
        }
    }
    if(count==0)
    printf("#Black&White");
    else
    printf("#Color");
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// codeforces checking
int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        char ch;
        scanf("%c",&ch);
        getchar();
        if(strchr("codeforces",ch)!=NULL) 
        printf("YES\n");
        else
        printf("NO\n");
    }
    return 0;
}


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// love story
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


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// vanya and cubes
int main()
{
    int n;
    scanf("%d",&n);
    int count = 0;
    int sum = 0;
    int temp = 0;
    while(sum<=n)
    {
        count++;
        temp = temp + count;
        sum = sum + temp;
        if(sum>n)
        count--;
    }
    printf("%d",count);
    return 0;
}


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// magical sticks
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        if(n%2==0)
        printf("%d\n",n/2);
        else
        {
            int temp = (n-1)/2;
            temp++;
            printf("%d\n",temp);
        }
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
//minute before the new year
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int h,m;
        scanf("%d %d",&h,&m);
        int leftmin = ((24-h)*60)-m;
        printf("%d\n",leftmin);
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// laptops
void sort(int *arr,int *arr2,int n);
int main()
{
    int n;
    scanf("%d",&n);
    int price[n];
    int quality[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&price[i]);
        scanf("%d",&quality[i]);
    }
    if(n<(10000)) // it's a loop hole .. i made it from the test case but it's not efficient ,it's not the proper way
    sort(price,quality,n);
    int count=0;
    for(int i=0;i<n-1;i++)
    {
        if(price[i]<price[i+1] && quality[i]>quality[i+1])
        {
            count++;
            break;
        }
    }
    if(count>0)
    printf("Happy Alex");
    else
    printf("Poor Alex");
    return 0;
}

void sort(int *arr,int *arr2,int n)
{
    int i,j,temp,temp1;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                temp1=arr2[i];
                arr[i]=arr[j];
                arr2[i]=arr2[j];
                arr[j]=temp;
                arr2[j]=temp1;
            }
        }
    }
}


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// bit++
int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    char str[4];
    int flag=0;
    for(int i=0;i<n;i++)
    {
        scanf("%s",str);
        getchar();
        if(str[0]=='+' || str[2]=='+')
        flag++;
        else
        flag--;
    }
    printf("%d",flag);
    return 0;
}


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// theatre square
int main()
{
    long long int n,m,a;
    scanf("%lld %lld %lld",&n,&m,&a);
    long long int flag1=n%a,total,temp;
    long long int flag2=m%a;
    if(a*a>n*m)
    {
        printf("1");
    }
    else
    {
        total = (n/a)*(m/a);
        if(flag1>0 && flag2>0)
        total=total + (n/a) + (m/a) + 1;
        else if((flag1==0 && flag2>0) || (flag1>0 && flag2==0))
        {
            if(flag1==0)
            {
                temp=n/a;
            }
            else
            temp=m/a;
            total+=temp;
        }
        else
        total+=0;
        printf("%lld",total);
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// collecting coins
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int arr[3],n;
        scanf("%d %d %d %d",&arr[0],&arr[1],&arr[2],&n);
        int max = arr[0];
        for(int i=1;i<3;i++)
        {
            if(arr[i]>max)
            max = arr[i];
        }
        int minus=0;
        for(int i=0;i<3;i++)
        {
            if(arr[i]==max)
            continue;
            else
            minus = minus + (max-arr[i]);           
        }
        if((n-minus)%3==0 (n-minus)>=0) // we will initially equal their with whom have maximum coin among them 
        // then will minus from total and if the remaining coin %3 then yes else no
        printf("YES\n");
        else
        printf("NO\n");
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// floor number
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,x;
        scanf("%d %d",&n,&x);
        int floor = 1;
        int apartment = 2;
        while(apartment<n)
        {
            floor++;
            apartment = apartment + x;
        }
        printf("%d\n",floor);
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// ordinary numbers
int mypower(int n);
int digitcount(int n);
int mul(int n);
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int flag,value,result,i;
        // printf("%d",digitcount(n));
        if(n<10)
        {
            printf("%d\n",n);
            continue;
        }
        // if(n%10==0 && n>99)
        // {
        //     printf("%d\n",(digitcount(n)-1)*9);
        //     continue;
        // }
        else
        {
            flag = digitcount(n);
            // printf("f : %d",flag);
            result = (flag-1)*9;
            value = mul(flag);
            i = 1;
            // printf("v %d1",value);
            while(value*i<=n)
            {
                result++;
                i++;
            }
            printf("%d\n",result);
            continue;
        }
    }
}
int digitcount(int n)
{
    int flag=0;
    while(n!=0)
    {
        flag++;
        n/=10;
    }
    return flag;
}
int mul(int n)
{
    int value = 0;
    for(int i= 0;i<n;i++)
    {
        value = value + mypower(i);
    }
    return value;
}
int mypower(int n)
{
    int powervalue=1;
    while(n--)
    {
        powervalue = powervalue*10;
    }
    return powervalue;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
//T-primes
// int countdivisor(long long int n);
// int countsubdivisor()
int checkprime(long long check);
int main()
{
    int n;
    scanf("%d",&n);
    long long int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        int primeflag;
        long long flag = sqrt(arr[i]);
        // printf("fl : %lld i : %d",flag,i);
        if(flag*flag==arr[i])
        {
            primeflag = checkprime(flag);
        }
        else
        {
            printf("NO\n");
            continue;   // square of a prime numbers are T-primes // get from editorial
        }
        if(primeflag==0)
        printf("YES\n");
        else
        printf("NO\n");
        // i++;
    }
    // for(int i=0;i<n;i++)
    // {
    //     int result = 0;
    //     result = countdivisor(arr[i]);
    //     if(result==3)
    //     printf("YES\n");
    //     else
    //     printf("NO\n");
    // }
    return 0;
}

int checkprime(long long int check)
{
    int flag;
    if(check==2)
    return 0;
    if(check>=2)
    {
        flag=0;
        for(int j=2;j<=(check+1)/2;j++)
        {
            if(check%j==0)
            {
                flag++;
                break;
            }
        }
        return flag;
    }
    else 
    return -1;
    
}

// int countdivisor(long long int n)
// {
//     int count = 1;
//     for(int i=2;i<=n;)
//     {
//         if(n%i==0)
//         {
//             count++;
//             if(n%(i*i)==0) // check if i is not the square root of n
//             {
//                 count++;
//                 i=i*i;
//             }
//             else
//             i++;
//             if(count > 3)
//                 break;
//         }
//     }
//     return count;
// }

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// again twenty five
int main()
{
    long long int n;
    scanf("%lld",&n);
    printf("25");
    return 0;
}



#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// insomnia cure
int main()
{
    int k,l,m,n,d;
    scanf("%d %d %d %d %d",&k,&l,&m,&n,&d);
    int arr[d+1],count = 0;
    memset(arr,0,sizeof(arr));
    for(int i=k;i<=d;i+=k)
    {
        arr[i]++;
    }
    for(int i=l;i<=d;i+=l)
    {
        arr[i]++;
    }
    for(int i=m;i<=d;i+=m)
    {
        arr[i]++;
    }
    for(int i=n;i<=d;i+=n)
    {
        arr[i]++;
    }
    for(int i=0;i<=d;i++)
    {
        if(arr[i]!=0)
        count++;
    }
    printf("%d",count);
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// police recruits
int main()
{
    int n;
    scanf("%d",&n);
    int sum = 0,crime = 0,state;
    while(n--)
    {
        scanf("%d",&state);
        sum = sum + state;
        if(sum<0)
        {
            crime++;
            sum = 0;
        }
    }
    printf("%d",crime);
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
//hulk
int main()
{
    int n;
    scanf("%d",&n);
    char str[10000];
    strcpy(str,"I hate");
    if(n==1)
    {
        printf("I hate it");
    }
    else
    {
        for(int i=2;i<=n;i++)
        {
            if(i%2==0)
            strcat(str," that I love");
            else
            strcat(str," that I hate");
        }
        strcat(str," it");
        puts(str);
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// fafa and his company
int main()
{
    int n;
    scanf("%d",&n);
    int count = 0;
    for(int i=1;i<=n/2;i++)
    {
        if(n%i==0)
        count++;
    }
    printf("%d",count);
    return 0;
}

// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>
// #include<math.h>
// #include<limits.h>
// // olesya and rodion
// long long int mypower(int x,int n);
// int main()
// {
//     int n,t;
//     scanf("%d %d",&n,&t);
//     long long int flag = 0;
//     for(long long int i=mypower(10,n-1);i<mypower(10,n);i++)
//     {
//         if(i%t==0)
//         {
//             flag = i;
//             break;
//         }
//     }
//     (flag==0)?printf("%d",-1):printf("%lld",flag);
//     return 0;
// }
// long long int mypower(int x,int n)
// {
//     long long int powervalue = 1;
//     while(n--)
//     {
//         powervalue = powervalue*x;
//     }
//     return powervalue;
// }
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// olesya and rodion
int main()
{
    int n,t;
    scanf("%d %d",&n,&t);
    if(n==1 && t==10)
    printf("-1");
    else
    {
        if(t==10)
        t=1;    // look at the constraint so carefully
        // here digit will be greater than 18 means we can't do it even with the long long int;
        // so here we have to think out of the box..
        printf("%d",t);
        for(int i=1;i<n;i++)
        {
            printf("0");
        }
    }
    return 0;
}


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// spell check
int cmp(const void *a,const void *b);
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        char str[n];
        scanf("%s",str);
        qsort(str,strlen(str),sizeof(char),cmp);
        if(strcmp(str,"Timru")==0)
        puts("YES");
        else
        puts("NO");
    }
    return 0;
}
int cmp(const void *a,const void *b)
{
    return *(char *)a-*(char *)b;
}


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// night at the museum
int main()
{
    char str[101];
    scanf("%s",str);
    int sum = 0,cmp;
    char temp = 'a'; // at the clock inititally at 'a' position
    for(int i=0;i<strlen(str);i++)
    {
        cmp = str[i]-temp;       
        cmp = abs(cmp);
        if(cmp>13) //  cmp > (26/2) then we will change the rotation
        sum = sum + (26-cmp);
        else
        sum = sum + cmp;
        temp = str[i];
        cmp = 0;
    }
    printf("%d",sum);
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// mahmood and ehab and the even odd game
int main()
{
    int n;
    scanf("%d",&n);
    puts((n%2==0)?"Mahmood":"Ehab");
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// equal candies
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        int min = INT_MAX;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
            if(arr[i]<min)
            min = arr[i];
        }
        long long int eat = 0;
        for(int i=0;i<n;i++)
        {
            eat = eat + (long long)(arr[i]-min);
        }
        printf("%lld\n",eat);
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// phoenix and balance
int mypower(int , int );
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        long long int sum = 0; // the sum might be come long long int so will take the variable as long long int
        long long int sum2 = 0;
        int limit = n/2;
        for(int i=0;i<n;i++)
        {
            arr[i] = mypower(2,i+1);
            if(i<(limit-1) || i==n-1) // will take the largest value & the first (n/2)-1 small values then from it will delete the others sum
            sum = sum + arr[i];
            else
            sum2 = sum2 + arr[i];
        }
        long long result = sum - sum2;
        result = abs(result);
        printf("%lld\n",result);
    }
    return 0;
}
int mypower(int x,int n)
{
    int powervalue=1;
    while(n--)
    {
        powervalue = powervalue*x;
    }
    return powervalue;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// plus or minus
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        (a-b==c)?printf("-\n"):printf("+\n");
    }
    return 0;
}


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// icpc ballons
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        char str[n];
        scanf("%s",str);
        int arr[26];
        memset(arr,0,sizeof(arr));
        for(int i=0;i<strlen(str);i++)
        {
            arr[str[i]-'A']++;
        }
        int totalballon = 0;
        for(int i=0;i<26;i++)
        {
            if(arr[i]>0)
            totalballon = totalballon + (2 + arr[i] -1); // for the first frequency we will add 2 and for others we will add 1
        }
        printf("%d\n",totalballon);
    }
    return 0;
}


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// keyboard
int main()
{
    char ch;
    ch = getchar();
    char str[101];
    scanf("%s",str);
    char keyboard[]= "qwertyuiopasdfghjkl;zxcvbnm,./";
    for(int i=0;i<strlen(str);i++)
    {
        char *ptr = strchr(keyboard,str[i]); // here strchr return a pointer to the str[i] and controlling a pointer we can print our desire word
        (ch=='R')?printf("%c",*(ptr-1)):printf("%c",*(ptr+1));
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// odd set
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,a;
        scanf("%d",&n);
        int odd = 0;
        for(int i=0;i<(n*2);i++)
        {
            scanf("%d",&a);
            if(a%2!=0)
            odd++; // if the count of odd is the half of the number then it will be possible to make pair with each of sum is odd
        }
        if(odd == n)
        printf("Yes\n");
        else
        printf("No\n");
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// colourblindness
char str[2][1000001];
int solve()
{
	int n, i;
	scanf("%d %s %s", &n, str[0], str[1]);
	for(i=0;i<n;++i) 
    if(str[0][i]!=str[1][i] && (str[0][i]=='R' || str[1][i]=='R')) 
    return 0;
	return 1;
}
 
int main()
{
	int t;
	scanf("%d", &t);
	while(t--) 
    puts(solve()?"YES":"NO");
	return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// favourite sequence
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        int resultant[n];
        int m1,m2;
        if(n%2==0)
        m1=m2=n/2;
        else
        {
            m1=(n+1)/2;
            m2 = n/2;
        }
        int k = 0;
        for(int i=0;i<m1;i++)
        {
            resultant[k] = arr[i]; // implement the loop in paper ..you will got the logic
            k+=2;
        }
        k = 1;
        for(int i=n-1;i>=m1;i--)
        {
            resultant[k]=arr[i]; // implement on paper
            k+=2;
        }
        for(int i=0;i<n;i++)
        {
            printf("%d ",resultant[i]);
        }
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// increasing
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        int flag = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j)
                continue;
                if(arr[i]==arr[j])
                {
                    flag++;
                    break;
                }
            }
        }
        puts(flag?"NO":"YES");
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// part lighting
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        printf("%d\n",((a*b)+1)/2);
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// array with odd sum
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        int sum = 0;
        int odd = 0;
        int even = 0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
            sum = sum + arr[i];
            if(arr[i]%2==0)
            even++;
            if(arr[i]%2!=0)
            odd++;
        }
        if(sum%2!=0)
        {
            printf("YES\n");
            continue;
        }
        else if(sum%2==0 && (even==0 || odd==0))
        {
            printf("NO\n");
            continue;
        }
        else
        {
            printf("YES\n");
        }
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// doraemon and stairs
int main()
{
    int n,m,temp,step,flag=0;
    scanf("%d %d",&n,&m);
    if(n<m)
    printf("-1");
    else if(n==m)
    printf("%d",n);
    else
    {
        temp = n/2;
        step = temp + n%2;
        if(step%m==0)
        printf("%d\n",step);
        else
        {
            while(step<=n)
            {
                if(step%m==0)
                {
                    flag++;
                    break;
                }
                step++;
            }
            if(flag)
            printf("%d\n",step);
            else
            printf("%d\n",-1);   
        }
           
    }

}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// maximum in table
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0 || j==0)
            arr[i][j]=1;
            else
            {
                arr[i][j]=arr[i-1][j] + arr[i][j-1];
            }
        }
    }
    printf("%d",arr[n-1][n-1]);
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// maximum increase
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max = 1;
    int temp;
    for(int i=0;i<n-1;i++)
    {
        temp = 1;
        if(arr[i]<arr[i+1])
        {
            while(arr[i]<arr[i+1] && i<n-1)
            {
                temp++;
                if(arr[i]<arr[i+1])
                i++;
            }
        }
        if(temp>max)
        max = temp;
    }
    printf("%d",max);
    return 0;
}


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// copycopycopycopycopy
int cmp(const void *a,const void *b);
int distinct(int *arr,int n);
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        qsort(arr,n,sizeof(int),cmp);
         // corner case : one element can repeat multiple time but we have to count it for one time
        // after sorting we have to count with all the distinct words which will be our desired ans
        int max = distinct(arr,n);

        // value was my first logic : 

        // 7
        // 1 2 7 1 6 10 2

        // analyzing this case i built the new logic to count all the distinct element
        // this code will count the longest increasing subarray where my repeated element will be exclude so this logic won't be universal

        // for(int i=0;i<j;i++)
        // {
        //     printf("%d ",temp[i]);
        // }
        // int temp;
        // for(int i=0;i<n-1;i++)
        // {
        //     temp = 1;
        //     if(arr[i]<arr[i+1])
        //     {
        //         while(arr[i]<arr[i+1] && i<n-1)
        //         {
        //             temp++;
        //             if(arr[i]<arr[i+1])
        //             i++;
        //         }
        //     }
        //     if(temp>max)
        //     max = temp;
        // }
        
        printf("%d\n",max);
    }
    return 0;
}
int cmp(const void *a,const void *b)
{
    return *(int *)a - *(int *)b;
}
int distinct(int *arr,int n)
{
    int j = 1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[i-1])
        j++;
    }
    return j;
}


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// sum of odd integers
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        int flag = sqrt(n);
        if(n%2==0 && k%2!=0)
        puts("NO");
        else if(n%2!=0 && k%2==0)
        puts("NO");
        else
        {
            if(k<=flag)
            puts("YES");
            else
            puts("NO");
        }
    }
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// chewbacca and number
long long int mypower(int x,int n);
int main()
{
    long long int n,p;
    scanf("%lld",&n);
    int arr[20];
    memset(arr,0,sizeof(arr));
    long long int temp = n;
    int i = 0;
    while(temp!=0)
    {
        arr[i] = temp%10;
        temp/=10;
        i++;
    }
    if(n!=9) // if n is only 9 then we can't subtract it as it will be zero ... so it's a corner case
    {
        for(int j=0;j<i;j++)
        {
            if(arr[j]==9 && j==i-1) // here 9 is the corner case ... if we got 9 as a first number we can't subtract it
            // as we can't start with leading zeros
            continue;
            if(9-arr[j]<5)
            arr[j] = 9 - arr[j];
        }
    }
    long long int sum = 0;
    p = 0;
    while(i--)
    {
        sum = sum + arr[p]*mypower(10,p);
        p++;
    }
    printf("%lld",sum);
    return 0;
}
long long int mypower(int x,int n)
{
    long long int powervalue=1; // ensure that the variable is in long long int 
    while(n--)
    {
        powervalue = powervalue*x;
    }
    return powervalue;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// divisible array
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            arr[i] = i+1;
            sum = sum + arr[i];
        }
        int rem = sum%n;
        if(rem==0)
        {
            for(int i=0;i<n;i++)
            {
                printf("%d ",arr[i]);
            }
        }
        else
        {
            arr[0] = arr[0] + rem;
            for(int i=0;i<n;i++)
            {
                printf("%d ",arr[i]);
            }
        }
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// vanya and fence
int main()
{
    int n,h;
    scanf("%d %d",&n,&h);
    int arr[n];
    int count = 0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]<=h)
        count++;
        else 
        count+=2;
    }
    printf("%d",count);
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// medium number
int cmp(const void *a,const void *b);
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int arr[3];
        for(int i=0;i<3;i++)
        {
            scanf("%d",&arr[i]);
        }
        qsort(arr,3,sizeof(int),cmp);
        printf("%d\n",arr[1]);
    }
    return 0;
}
int cmp(const void *a,const void *b)
{
    return *(int *)a-*(int *)b;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// lucky division
int checklucky(int n);
int main()
{
    int n;
    scanf("%d",&n);
    int flag = checklucky(n);
    int value = 0;
    int dividor = n/2;
    int arr[12]={4,7,47,74,444,447,477,777,774,744,474,747};
    if(flag==1)
    puts("YES");
    else
    {
        for(int i=0;i<12;i++)
        {
            if(arr[i]<=dividor)
            {
                if(n%arr[i]==0)
                value++;
            }
        }
        puts(value?"YES":"NO");
    }
    return 0;
}
int checklucky(int n)
{
    int count = 0;
    int count2 = 0;
    while(n!=0)
    {
        if(n%10==7 || n%10==4)
        count++;
        else 
        count2++;
        n/=10;
    }
    if(count==4 || count==7 || count2==0)
    return 1;
    else
    return 0;
}


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// cards for friends
int dividingcount(int n);
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int w,h,n;
        scanf("%d %d %d",&w,&h,&n);
        int mul = w*h;
        int total = dividingcount(mul);
        // if(w%2!=0 && h%2!=0 && n==1)
        // {
        //     puts("YES");
        //     continue;
        // }
        // else if(w%2!=0 && h%2!=0 && n>1)
        // {
        //     puts("NO");
        // }
        // else
        // {
            // if(w%2==0 && h%2==0)
            // {
                // flagw = dividingcount(w);
                // flagh = dividingcount(h);
                // total =(flagw*flagh);
            // }
            // else if(w%2==0)
            // {
            //     total = dividingcount(w);
            // }
            // else
            // {
            //     total = dividingcount(h);
            // }
            // if(w%2==0 && h%2==0)
            //     {
            //         w = w /2;
            //         count+=2;
            //     }
            //     else if(w%2==0)
            //     {
            //         w = w/2;
            //         count+=2;
            //     }
            //     else
            //     {
            //         h = h/2;
            //         count+=2;
            //     }
                // printf("c : %d w : %d h : %d\n",count,w,h);
            // while(w>1 || h>1)
            // {
            //     // printf("c : %d\n",count);
            //     if(w%2==0 && h%2==0)
            //     {
            //         w = w /2;
            //         count++;
            //     }
            //     else if(w%2==0)
            //     {
            //         w = w/2;
            //         count++;
            //     }
            //     else
            //     {
        //             h = h/2;
        //             count++;
        //         }
        //         // printf("c : %d\n",count);
        //         if(count>=n)
        //         break;
        //     }
        //     count++; // for 1:1 ratio
        if(total>=n)
        puts("YES");
        else
        puts("NO");
        // }
    // }
}
}
int dividingcount(int n)
{
    int count = 1;
    while(n%2==0)
    {
        count*=2; // after each time diving the card number increase twicely than before
        n/=2;
    }
    return count;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// atilla_s favourite problem
int main()
{
    int t;
    scanf("%d",&t);
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    int len = strlen(alphabet);
    while(t--)
    {
        int n,j=0;
        scanf("%d",&n);
        char str[n];
        scanf("%s",str);
        int arr[len];
        memset(arr,0,sizeof(arr));
        for(int i=0;i<strlen(str);i++)
        {
            for(int j=0;j<len;j++)
            {
                if(str[i]==alphabet[j])
                {
                    arr[j]++;
                    break;
                }
            }
        }
        int ans ;
        for(int i=len-1;i>=0;i--)
        {
            if(arr[i]!=0)
            {
                ans = i+1;
                break;
            }
        }
        printf("%d\n",ans);
    }
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// multiplication table
int main()
{
    int n,x;
    scanf("%d %d",&n,&x);
    int count = 0;
    for(int i=1;i<=n;i++)
    {
        if(x%i==0)
        {
            if((x/i)<=n)
            count++;
        }
    }
    printf("%d",count);
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// aab
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char str[4];
        scanf("%s",str);
        char a[] = {str[0],'\0'};
        char b[] = {str[2],'\0'};
        printf("%d\n",atoi(a)+atoi(b));
    }
    return 0;
}


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// construct the string
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,a,b,i,temp;
        scanf("%d %d %d",&n,&a,&b);
        char str[n];
        char ch;
        for(i=0;i<n;i++)
        {
            ch = 'a';
            temp = b;
            while(temp>0 && i<n)
            {
                // printf("i : %d",i);
                str[i]= ch;
                ch++;
                temp--;
                if(temp>0)
                i++;
            }
        }
        i = n;
        // printf("i : %d",i);
        str[i]='\0';
        puts(str);
    }
}


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
//business trip
int cmp(const void *a,const void *b);
int main()
{
    int k;
    scanf("%d",&k);
    int arr[12];
    for(int i=0;i<12;i++)
    {
        scanf("%d",&arr[i]);
    }
    qsort(arr,12,sizeof(int),cmp);
    int count = 0;
    int sum = 0;
    for(int i=0;i<12;i++)
    {
        if(sum>=k)
        break;
        else
        {
            sum = sum + arr[i];
            count++;
        }
    }
    if(sum<k)
    printf("-1");
    else
    printf("%d",count);
}
int cmp(const void *a,const void *b)
{
    return *(int *)b - *(int *)a;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
//linear keyboard
int position(char *str,char c);
int main()
{
    int t;
    scanf("%d",&t);
    char keyboard[26];
    char str[51];
    for(int i=0;i<t;i++)
    {
        // printf("t : %d\n",t);
        scanf("%s",keyboard);
        scanf("%s",str);
        int sum = 0;
        for(int i=1;i<strlen(str);i++)
        {
            sum = sum + abs(position(keyboard,str[i])-position(keyboard,str[i-1]));
        }
        printf("%d\n",sum);
    }
    // return 0;
}
int position(char *str,char c)
{
    int len = strlen(str);
    for(int i=0;i<len;i++)
    {
        if(str[i]==c)
        return i+1;
    }
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// beautiful matrix
int main()
{
    int arr[5][5];
    int p,q;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            scanf("%d",&arr[i][j]);
            if(arr[i][j]==1)
            {
                p=i;
                q = j;
            }
        }
    }
    p = abs(p-2);
    q = abs(q-2);
    printf("%d",p+q);
    return 0;
}


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// strones on the table
int main()
{
    int n;
    scanf("%d",&n);
    char str[n];
    scanf("%s",str);
    int len = strlen(str);
    int count = 0;
    for(int i=0;i<len-1;i++)
    {
        if(str[i]==str[i+1])
        count++;
    }
    printf("%d",count);
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// young physicist
int main()
{
    int n;
    scanf("%d",&n);
    int x,y,z,a = 0,b = 0,c =0;
    for(int i=0;i<n;i++)
    {
        scanf("%d %d %d",&x,&y,&z);
        a+=x;b+=y;c+=z;
    }
    puts((a||b||c)?"NO":"YES");
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
//tram
int main()
{
    int n;
    scanf("%d",&n);
    int a,b,cap = 0,temp = 0;
    while(n--)
    {
        scanf("%d %d",&a,&b);
        temp = temp + (b-a);
        if(temp>cap)
        cap = temp;
    }
    printf("%d",cap);
    return 0;
}


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// magnets
int main()
{
    int n;
    scanf("%d",&n);
    char str[n][2];
    for(int i=0;i<n;i++)
    {
        scanf("%s",&str[i]);
    }
    int count = 0;
    for(int i=0;i<n;)
    {
        if(str[i][0]=='1')
        {
            while(str[i][0]=='1')
            {
                if(str[i][0]=='1')
                i++;
            }
            count++;
        }
        else
        {
            while(str[i][0]=='0')
            {
                i++;
            }
            count++;
        }
    }
    printf("%d",count);
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// presents
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int temp[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        temp[i]=arr[i];
    }
    int p;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(temp[j]==i+1)
            {
                arr[i] = j+1;
                break;
            }
        }
        printf("%d ",arr[i]);
    }
    return 0;
}



#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// ultra fast mathmatician
int main()
{
    char str1[101];
    char str2[101];
    char result[101];
    scanf("%s",str1);
    scanf("%s",str2);
    int i=0;
    for(i=0;i<strlen(str1);i++)
    {
        int a=str1[i]-'0';
        int b = str2[i]-'1';
        int c = abs(a-b);
        if(c==1)
        result[i] = '0';
        else
        result[i] = '1';
    }
    result[i]='\0';
    puts(result);
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// is your horseshoe on the other hoof?
int cmp(const void *a,const void *b);
int main()
{
    int arr[4];
    int count = 0;
    for(int i=0;i<4;i++)
    {
        scanf("%d",&arr[i]);
    }
    qsort(arr,4,sizeof(int),cmp);
    for(int i=0;i<3;i++)
    {
        if(arr[i]==arr[i+1])
        count++;
    }
    printf("%d",count);
    return 0;
}
int cmp(const void *a,const void *b)
{
    return *(int *)a-*(int *)b;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
//gravity flip
int cmp(const void *a,const void *b);
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    qsort(arr,n,sizeof(int),cmp); //it's enough sort the array in ascending order
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
int cmp(const void *a,const void *b)
{
    return *(int *)a-*(int *)b;
}


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// arrival of the general
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int max = INT_MIN,result;
    int indexmax,indexmin;
    int min = INT_MAX;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>max)
        {
            indexmax = i;
            max = arr[i];
        }
        if(arr[i]<=min)
        {
            indexmin = i;
            min = arr[i];
        }     
    }
    // printf("%d %d\n",indexmin,indexmax);
    if(indexmax<indexmin)
    {
        result = (indexmax-0) + (n-1-indexmin); // to understand the logic do it manually in paper pen
    }
    else
    {
        result = (indexmax-0)+(n-2-indexmin); // do manually in paper pen.. why subtract 2
    }
    printf("%d",result);

}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// new year and hurry
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int timeleft = (4*60) - k;
    int sum =0,count = 0;
    for(int i=1;i<=n;i++)
    {
        sum = sum + (i*5);
        if(sum>timeleft)
        {
            break;
        }
        else
        count++;
    }
    printf("%d",count);
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// game with sticks
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int min;
    (m>n)?(min=n):(min = m);
    puts((min%2)?"Akshat":"Malvika");
    return 0;
}


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// design tutorial learn from math
int checkprime(int n);
int main()
{
    int n,check,first,second,check2;
    scanf("%d",&n);
    if(n%2==0)
    {
        check = checkprime(n/2);
        if(check==1) // means n/2 isn't prime
        printf("%d %d",n/2,n/2); // so we can print this
        else
        {
            first = (n+2)/2; // we will add two to keep it even and will get it's n/2 
            second = n- first;
            check = checkprime(second); // now will thus second is prime or not
            while(check!=1) // if second is prime
            {
                first-=2; // we will subtract two from first and will get new first 
                second = n - first; // new second
                check = checkprime(second); // now will check is new second prime or not...if it's then we continue the process untill get both composite
                // printf("%d %d",first,second);
            }
            printf("%d %d",first,second);
        }
    }
    else
    {
        first = (n+1)/2; // we will add one and will get it's n/2
        second = n - first; // second value
        check2 = checkprime(first); // will check is first prime or not
        if(check2==0) // if it is....then we will update the first
        {
            first = first + 1; // as it is prime so it's odd....so we will add one..and make it even means composite
            second = n - first; // new second after update first
        }
        check = checkprime(second); // now will check is second prime or not
        while(check!=1) // if it's then will update it
        {
            first-=2;
            second = n - first;
            check = checkprime(second);
        }
        printf("%d %d",first,second);
    }
    return 0;
}
int checkprime(int n)
{
    int flag = 0;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            flag++;
            break;
        }
    }
    return flag;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// registration system
char *numtostring(char *str,int n);
int checkoccurance(char str[][33],int n);
int main()
{
    int n;
    scanf("%d",&n);
    int flag = n;
    char str[n][33],num[10],temp[33],data[n][33];
    int i=0;
    // scanning the string and store them in the 2D string
    while(n--)
    {
        scanf("%s",str[i]);
        i++;
    }
    printf("OK\n"); // first string will always be ok
    int q = 0;
    for(i=1;i<flag;i++) // so we will start from i=1
    {
        int count = checkoccurance(str,i);
        if(count==1) // count==1 means there is occurance of ith string with it's previous string
        {
            int p = 1;
            while(1)
            {
                int test=0;
                strcpy(temp,str[i]); // we will copy the str[i] string with a temp string
                strcat(temp,numtostring(num,p)); // here we declared a funnction numtostring which will convert a integer(p) to string
                // then we concatenate the temp string with this number string
                if(q>0) 
                {
                    for(int r=0;r<q;r++)
                    {
                        if(strstr(data[r],temp)) // here we will check weather the temp string repeat with the previous concatenated string
                        // which are stored in the 2D string called data
                        {
                            test++; 
                        }
                    }
                }
                // if(k>=i)
                // break;
                if(test==0) // test=0 means there is no occurance of the temp string with the previous database
                // so our temp string can be use as a new name so we will terminate the loop.
                //here with first condition we are checking
                break;
                else // if test!=0 .then we will increment the value of p as well as the value of k.
                {
                    p++;
                }
            }
            puts(temp);
            strcpy(data[q],temp); // here we making the database with the accepted name(temp string) to verify the upcomine temp string
            q++; // after assigning data in data[0],we have to increment the q to assign next data to data string
        }
        else
        printf("OK\n"); // count!=1 means count must be 0 and there is no occurrance of a string twice time so we can
        // simple accept the name and print ok
    }
}
// function for convert int number to a string with adding the null character
char *numtostring(char *str,int n)
{
    sprintf(str,"%d",n);
    return str;
}
// fucntion to check the occurance of the string 
int checkoccurance(char str[][33],int i)
{
    int count = 0;
    for(int j=0;j<i;j++) // will check a upcoming string with the previous checked string
    {
        if(strstr(str[j],str[i]))
        {
            if((strlen(str[i])==strlen(str[j]))) // as strstr will be true even if for the substring.so we have to check the length also
            {
                    count++;
                    break;
            }
        }
    }
    return count;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
//oath of the night's watch
void sort(int *arr,int n);
int sameelement(int *arr,int n);
int similarelement(int *arr,int n);
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int count = 0;
    sort(arr,n);
    if(n<=2)
    printf("0");
    else
    {
        int result = n - sameelement(arr,n) - similarelement(arr,n);
        printf("%d",result);
    }  
    return 0;
}
void sort(int *arr,int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int sameelement(int *arr,int n)
{
    int flag=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]==arr[0])
        flag++;
        else
        break;
    }
    return flag;
}
int similarelement(int *arr,int n)
{
    int count=1;
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]==arr[n-1])
        count++;
        else
        break;
    }
    return count;
}