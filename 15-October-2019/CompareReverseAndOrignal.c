#include <stdio.h>
/* Include other headers as needed */
int main()
{
int nn;
  scanf("%d",&nn);
  while(nn>0)
  {
    int n=1,i=0,z;
    int x;
    scanf("%d",&x);
    z=x;
    while(x>0)
  {
    if(i==1)
    n=n*10;
      z=z+n;
      i=1;
      x=x/10;
  }
  printf("%d\n",z);
    nn--;
  }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}