#include <stdio.h>
void main()
{
int qty,price,total,discount;
printf("enter qty=");
scanf("%d",&qty);
printf("enter price");
scanf("%d",&price);
total=qty*price;
printf("total is %d",total);
if(total < 7000)
{
discount=total*10/100;
printf("discount is %d",discount);
}
else
discount=total*25/100;
printf("discount is %d",discount);
}