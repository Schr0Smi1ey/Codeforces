#include<bits/stdc++.h>
using namespace std;
// gennady and a card game
int main()
{
    char str[3];
    scanf("%s",str);
    char ch = str[0];
    char ch1 = str[1];
    char temp[3];
    int flag = 0;
    for(int i=0;i<5;i++)
    {
        scanf("%s",temp);
        if(strchr(temp,ch)!=NULL || strchr(temp,ch1)!=NULL)
        flag++;
    }
    puts(flag?"YES":"NO");
    return 0;
}