#include <stdio.h>
 
int main()
{
  int n;
  scanf("%d", &n);
 
  int i = 1;
  while (i <= n)
  {
    int posicao = ((1 + (i - 1)) * (i - 1)) / 2;
    int primeiro_termo = 1 + (((posicao + 1) - 1) * 2);
    printf("%d*%d*%d = ", i, i, i);
    int j = 0;
    while (j < i)
    {
      if ((j + 1) < i)
      {
        printf("%d+", primeiro_termo);
      }
      else
      {
        printf("%d\n", primeiro_termo);
      }
      primeiro_termo += 2;
      j++;
    }
    i++;
  }
  return 0;
}