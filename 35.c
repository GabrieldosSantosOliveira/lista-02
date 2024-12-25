#include <stdio.h>
 
int soma_dos_divisores(int k)
{
  int i;
  int soma = 0;
  int n = k;
  for (i = 1; i <= (n /2); i++)
  {
    if (n % i == 0)
    {
      soma += i;
    }
  }
  return soma;
}
 
int main()
{
  int n, quantidade_de_pares = 0;
  scanf("%d", &n);
  int i = 4;
  while (quantidade_de_pares < n)
  {
    int l = soma_dos_divisores(i);
    int k = soma_dos_divisores(l);
    if (i == k && i < l)
    {
      printf("(%d,%d)\n", i, l);
      quantidade_de_pares++;
    }
    i++;
  }
  return 0;
}