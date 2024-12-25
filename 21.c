#include <stdio.h>
 
int main()
{
  int n, n1, n2;
  scanf("%d", &n);
  int i = 0;
  while (i < n)
  {
    scanf("%d", &n1);
    scanf("%d", &n2);
 
    int x1 = ((n1 % 10) * 100) + ((n1 % 100) - (n1 % 10)) + (((n1 - (n1 % 10)) - (((n1 % 100) - (n1 % 10)))) / 100);
    int x2 = ((n2 % 10) * 100) + ((n2 % 100) - (n2 % 10)) + (((n2 - (n2 % 10)) - (((n2 % 100) - (n2 % 10)))) / 100);
 
    if (x2 > x1)
    {
      printf("%d\n", x2);
    }
    else
    {
      printf("%d\n", x1);
    }
    i++;
  }
 
  return 0;
}