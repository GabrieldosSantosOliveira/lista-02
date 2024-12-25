#include <stdio.h>
double maior_elemento(double a, double b, double c)
{
  if (a >= b && a >= c)
  {
    return a;
  }
  if (b >= a && b >= c)
  {
    return b;
  }
  if (c >= a && c >= b)
  {
    return c;
  }
}
double menor_elemento(double a, double b, double c)
{
  if (a <= b && a <= c)
  {
    return a;
  }
  if (b <= a && b <= c)
  {
    return b;
  }
  if (c <= a && c <= b)
  {
    return c;
  }
}
int main()
{
  int i;
  double maior, menor, subMenor, subMaior, a, b, c, d;
 
  scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
  if (a >= b && a >= c && a >= d)
  {
  }
  maior = maior_elemento(b, c, d);
  menor = menor_elemento(b, c, d);
  subMenor = (b + c + d) - maior - menor;
  if (a >= maior)
  {
    subMaior = maior;
    maior = a;
  }
  else if (a >= subMenor)
  {
    subMaior = a;
  }
  else if(a <= subMenor && a >= menor){
    subMaior = subMenor;
    subMenor = a;
  }
  else if (a <= menor)
  {
    subMaior = subMenor;
    subMenor = menor;
    menor = a;
  }
  printf("%.2lf, %.2lf, %.2lf, %.2lf", menor, subMenor, subMaior, maior);
  return 0;
}