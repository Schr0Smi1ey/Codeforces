#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
int main(){

    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        char str[n];
        scanf("%s",str);
        int fre[26];
        memset(fre,0,sizeof(fre));
        int flag=0;
        for(int i=0;i<strlen(str);i++){
            fre[str[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(fre[i]!=0)
            {
                flag++;
            }
            if(flag>1)
            break;
        }
        if(flag==1){
            printf("1\n");
            continue;
        }
        char arr[200][3];
        int k = 1,i=1;
        char temp[]= {str[0],str[1],'\0'};
        strcpy(arr[0],temp);
        while(i<n-1){
            char temp2[] = {str[i],str[i+1],'\0'};
            strcpy(arr[k],temp2);
            k++;
            i++;
        }
        char tempo[] = "00";
        int count = k;
        for(int i =0;i<k;i++){
            for(int j=i+1;j<k;j++)
            {
                if(strcmp(arr[i],tempo)==0)
                continue;
                if(strcmp(arr[i],arr[j])==0)
                {
                    count--;
                    strcpy(arr[j],tempo);
                }
            }
        }
        printf("%d\n",count);
    }
}