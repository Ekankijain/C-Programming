#include <stdio.h>
int main()
{
    int i,n,fact=1;
    printf("ENTER THE NUMBER = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    fact=i*fact;
    } printf(" FACTORIAL OF %d = %d",n,fact);
    return 0;
}
