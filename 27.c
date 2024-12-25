#include <stdio.h>
 
int main()
{
  int i = 2;
  int n;
  int soma = 1;
  scanf("%d", &n);
  printf("%d = 1 ", n);
  for (; i < n; i++)
  {
    if ((n % i) == 0)
    {
      printf("+ %d ", i);
      soma += i;
    }
  }
  if (soma == n)
  {
    printf("= %d (NUMERO PERFEITO)\n", soma);
  }
  else
  {
    printf("= %d (NUMERO NAO E PERFEITO)\n", soma);
  }
  return 0;
}