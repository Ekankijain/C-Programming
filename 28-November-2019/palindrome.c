#include <stdio.h>
int
main ()
{
  int n, i, num, sum = 0, temp;
  scanf ("%d", &n);
  temp = sum;
  while (n > 0)
    {
      num = n % 10;
      sum = sum * 10 + num;
      n = n / 10;
    }
  if (temp == n)
    {
      printf ("palindrome no");
    }
  else
    printf ("not palindrome");

}
