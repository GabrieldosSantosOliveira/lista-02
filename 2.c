#include <stdio.h>
int main()
{
  int n, x;
  x = 0;
  int erro = 0;
  int i = 100;
 
  while (i >= 1)
  {
    scanf("%d", &n);
    x += n * i;
    if (n >= 10)
    {
      erro = -1;
    }
    i = i / 10;
  }
  if (erro == 0)
  {
 
    printf("%d, %d\n", x, (x * x));
  }
  else
  {
    printf("DIGITO INVALIDO\n");
  }
  return 0;
}