#include <stdio.h>
#include <string.h>
 int check(char *s,char c)
{
    int i,count=0;
     for(i=0;s[i];i++)
    {
    	if(s[i]==c)
    	{
          count++;
		}
 	}
 	return count;
}
int main()
{

    char s[100],j[100],c;
	int count,val=0,i;

    printf("Enter the Jewels string\t");
    gets(j);
    printf("Enter the Stones string\t");
    gets(s);
    for(i=0;i<strlen(j);i++)
    {
        count=check(s,j[i]);
        val=val+count;
    }
    printf("%d",val);

	return 0;



}
