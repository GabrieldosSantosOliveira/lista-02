#include <stdio.h>

int main()
{
  int n;

  while (1)
  {
    scanf("%d", &n);
    if (n <= 1)
    {
      printf("Fatoracao nao e possivel para o numero %d!\n", n);
    }
    else
    {
      printf("%d = ", n);
      int i;
      int x = 1;
      int k = n;
      for (i = 2; i <= n;)
      {
        if ((n % i) == 0)
        {
          n = n / i;
          x *= i;
          if (x == k)
          {
            printf("%d\n", i);
          }
          else
          {
            printf("%d x ", i);
          }
        }
        else
        {
          i++;
        }
      }
      break;
    }
  }
  return 0;
}