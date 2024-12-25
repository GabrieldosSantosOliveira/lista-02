#include <stdio.h>
#include <math.h>
 
int main()
{
  double a, b, c;
  double delta = 0;
  double x1, x2;
  scanf("%lf", &a);
  scanf("%lf", &b);
  scanf("%lf", &c);
  delta = (pow(b, 2) - (4 * a * c));
  if (delta < 0)
  {
    printf("RAIZES IMAGINARIAS\n");
  }
  else if (delta == 0)
  {
    x1 = (-(b) + sqrt(delta)) / (2 * a);
    printf("RAIZ UNICA\n");
    printf("X1 = %.2lf\n", x1);
  }
  else
  {
    x1 = (-(b) + sqrt(delta)) / (2 * a);
    x2 = (-(b)-sqrt(delta)) / (2 * a);
    if (x2 < x1)
    {
      double tmp = x2;
      x2 = x1;
      x1 = tmp;
    }
    printf("RAIZES DISTINTAS\n");
    printf("X1 = %.2lf\n", x1);
    printf("X2 = %.2lf\n", x2);
  }
  return 0;
}