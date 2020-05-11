#include<stdio.h>
#include<string.h>
int check(char *,char *);
int main()
{
    char magazine[100],ransom[100];
    int l,x,y;
    printf("Enter the magazine string\t");
    gets(magazine);
    printf("Enter the ransom string\t");
    gets(ransom);
    x=strlen(ransom);
    y=strlen(magazine);
    if(x<=y){
    l=check(magazine,ransom);
    l==0?printf("False"):printf("True");}
    else
    {
        printf("False");
    }
    return 0;
}
int check(char *magazine,char *ransom)
{
    int len,i,j,n;
    char a[2];
    n=strlen(magazine);
    for(i=0;i<strlen(ransom);i++)
    {
        a[0]=ransom[i];
        len=strcspn(magazine,a);
        if(len==n)
        {
            return 0;
        }
        for(j=len;j<n;j++)
        {
            magazine[j]=magazine[j+1];
        }
        n=n-1;
    }
    return 1;
}
