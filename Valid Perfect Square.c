#include<stdio.h>
int main()
{
    int i,n,flag=0;
    printf("Enter the number\t");
    scanf("%d",&n);
    for(i=1;i*i<=n;i++)
    {
       if((n/i==i)&&(n%i==0))
       {
          flag=1;
          break;
       }
    }
    flag==0?printf("False"):printf("True");
    return 0;
}
