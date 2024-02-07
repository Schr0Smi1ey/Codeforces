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
        int arr[n];
        int mineven = INT_MAX;
        int minodd = INT_MAX;
        int odd = 0,even = 0;
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
            if(arr[i]%2==0 && arr[i]<mineven)
            mineven = arr[i];
            if(arr[i]%2!=0 && arr[i]<minodd)
            minodd = arr[i];
            if(arr[i]%2==0)
            even++;
            else
            odd++;
        }  
        if(odd==0 || even ==0){
            puts("YES");
            continue;
        }
        else{
            if(odd>=1)
            {
                if(mineven>minodd)
                puts("YES");
                else
                puts("NO");
            }
        }
    }
    return 0;
}