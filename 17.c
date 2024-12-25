#include <stdio.h>
 
int main()
{
  int i = 0;
  int n, maior;
  int soma = 0;
  while (i < 4)
  {
    scanf("%d", &n);
    if (i == 0)
    {
      maior = n;
    }
    else if (n > maior)
    {
      maior = n;
    }
    soma += n;
    i++;
  }
  printf("%d\n", soma - maior);
  return 0;
}