#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,count=1,x=0,len,z=0;
    char num[10];
    printf("Enter the number\t");
    scanf("%s",num);
    printf("Enter the no of digits to be removed\t");
    scanf("%d",&k);
    len=strlen(num);
    if(len==k)
    {
        printf("0");
    }
    else
    {
    while((count<=k)&&(x<len))
    {
       if(num[x]==num[x+1])
       {
           x=x+1;
       }
       else if(num[x+1]>num[x])
       {
           count++;
           for(i=x+1;i<len;i++)
           {
               num[i]=num[i+1];
           }
           len=len-1;
       }
       else if(num[x+1]<num[x])
       {
           count++;
           for(i=x;i<len;i++)
           {
               num[i]=num[i+1];
           }
           len=len-1;
       }
    }
    for(i=0;i<len;i++)
    {
        if(num[i]==48)
        {
            z++;
        }
        else
            break;
    }
    for(i=0;i<(len-z);i++)
    {
        num[i]=num[i+z];
    }
    len=len-z;
    for(i=0;i<len;i++)
    {
        printf("%c",num[i]);

    }
    }
    return 0;
}
