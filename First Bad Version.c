#include<stdio.h>
#include<time.h>
int isBadVersion(int,int);
int main()
{
    int n,val,i;
    printf("Enter the no of version\t");
    scanf("%d",&n);
    srand(time(0));
    val=rand()%n;
    if(val==1)
    {
        printf("1 is the first bad version");
    }
    else
    {
        for(i=0;i<n;i++)
        {
            if(isBadVersion(i,val))
            {
                printf("%d is the first bad version",i);
                break;
            }
        }
    }
    return 0;
}
int isBadVersion(int i,int val)
{
      if(i==val)
      {
          return 1;
      }
      else
      {
          return 0;
      }
}
