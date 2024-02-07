#include<bits/stdc++.h>
using namespace std;
//lecture
int main()
{
    int n,m;
    cin>>n>>m;
    char str[n][11];
    char first[m][11];
    char second[m][11];
    for(int i=0;i<m;i++)
    {
        scanf("%s",first[i]);
        scanf("%s",second[i]);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%s",str[i]);
        // constructing the note
        for(int j=0;j<m;j++) // will iterate through the first string
        {
            if(strcmp(str[i],first[j])==0) // when got matches
            {
                if(strlen(second[j])<strlen(first[j])) // will compare with the second one
                {
                    strcpy(str[i],second[j]); // if second one of less than first will replace the string
                    break; // then will break .....this will save time
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%s ",str[i]); // finally print the note...after the modification
    }
    return 0;
}