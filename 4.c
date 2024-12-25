#include <stdio.h>
 
int main()
{
  int i = 0;
  int n;
  double f,c;
  scanf("%d", &n);
  while (i < n)
  {
    scanf("%lf", &f);
    c = (5 * (f - 32)) / 9;
    printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n", f, c);
    i++;
  }
 
  return 0;
}