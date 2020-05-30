#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int arr[1000][2],i,j,k,n,temp,swapped=1;
    float *res;
    printf("Enter the number of points\t");
    scanf("%d",&n);
    res=(float*)malloc(sizeof(float)*n);
    printf("Enter the points\n");
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&arr[i][0],&arr[i][1]);
        res[i]=sqrt((arr[i][0]*arr[i][0])+(arr[i][1]*arr[i][1]));
    }
    printf("Enter the value of K\t");
    scanf("%d",&k);
    for(i=n-1;i>=0&&swapped;i--)
    {
        swapped=0;
        for(j=0;j<=i-1;j++)
        {
            if(res[j]>res[j+1])
            {
                temp=res[j];
                res[j]=res[j+1];
                res[j+1]=temp;
                temp=arr[j][0];
                arr[j][0]=arr[j+1][0];
                arr[j+1][0]=temp;
                temp=arr[j][1];
                arr[j][1]=arr[j+1][1];
                arr[j+1][1]=temp;
                swapped=1;
            }
        }
    }
    printf("[");
    for(i=0;i<k;i++)
    {
        printf("[%d,%d]",arr[i][0],arr[i][1]);
        if(i!=(k-1))
            printf(",");
    }
    printf("]");



}
