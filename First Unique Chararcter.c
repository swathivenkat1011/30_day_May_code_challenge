#include<stdio.h>
#include<string.h>
int main()
{
    int i,t[26]={0},data,flag=0;
    char str[100];
    printf("Enter the string\t");
    gets(str);
    for(i=0;i<strlen(str);i++)
    {
        t[str[i]-'a']++;
    }
    for(i=0;i<strlen(str);i++)
    {
        if(t[str[i]-'a']==1)
        {
            flag=1;
            data=i;
            break;
        }
    }
    flag==0?printf("-1"):printf("%d",data);
    return 0;
}
