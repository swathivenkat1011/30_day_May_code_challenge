#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j=0,n,*arr;
    printf("Enter the array size\t");
    scanf("%d",&n);
    arr=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i+=2)
    {
        if(arr[i]!=arr[i+1])
        {
            printf("%d",arr[i]);
            break;
        }
    }
    return 0;
}
