#include <stdio.h>
#include <math.h>
long int fatorial(int n)
{
  long int k = 1;
  int i;
  for (i = n; i > 1; i--)
  {
    k = k * i;
  }
  return k;
}
 
int main()
{
  double x, n;
  scanf("%lf%lf", &x, &n);
  int i = 0;
  double valor = 0;
  while (i <= n)
  {
    valor += pow(x, i) / fatorial(i);
    i++;
  }
  printf("e^%.2lf = %.6lf\n", x, valor);
  return 0;
}