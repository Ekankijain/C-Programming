#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	int b,i,j,k,n,z,c=0;
	char a[100];
	gets(a);
    for(c=0,i=0;a[i]!='\0';i++)
    {
    	if(isalpha(a[i])){
    	c=c+ a[i];
		}
	}
	printf("\n%d",c);
}
