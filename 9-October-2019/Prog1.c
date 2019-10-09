#include<stdio.h>
#include<string.h>
int main()
{
	int b,c,i,j,z,m,n;
	char a[100],s[100],*p;
	gets(a);
	gets(s);
	strlwr(a);
	strlwr(s);
	for(c=0,p=strstr(a,s);p!='\0';p=strstr(p+1,s))
	{
		puts(p);
		c++;
	}
	
printf("%d",c);
}
