#include <stdio.h>
double menor(double a, double b)
{
  if (a < b)
  {
    return a;
  }
  return b;
}
 
int main()
{
  int numerador;
  double n;
  int denominador = 1;
  scanf("%lf", &n);
  while (n != (int)n)
  {
    n *= 10;
    denominador *= 10;
  }
  numerador = n;
  int i = 2;
  while (menor(numerador, denominador) >= i)
  {
    if (numerador % i == 0 && denominador % i == 0)
    {
      numerador /= i;
      denominador /= i;
    }
    else
    {
      i++;
    }
  }
 
  printf("%d/%d", numerador, denominador);
  return 0;
}