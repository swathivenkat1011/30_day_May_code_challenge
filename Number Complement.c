#include<stdio.h>
#include<math.h>
int main()
{
    int x,n,i,complement=0;
    printf("Enter no\t");
    scanf("%d",&n);
    x=log2(n)+1;
    for(i=0;i<x;i++)
    {
        n=n^(1<<i);
    }
    printf("Number Complement is %d",n);
    return 0;

}
