#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n,*arr,i,j,count=1,temp,k,swapped=1;
    printf("Enter the size of array\t");
    scanf("%d",&n);
    arr=(int *)malloc(sizeof(int)*n);
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=n-1;i>=0&&swapped;i--)
    {
        swapped=0;
        for(j=0;j<=i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swapped=1;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
        {
            count++;
            if(count>(floor(n/2)))
            {
                printf("largest element is %d",arr[i]);
            }
            break;
        }
        else
        {
            count=1;
        }
    }
    return 0;
}
