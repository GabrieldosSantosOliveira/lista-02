#include <stdio.h>
 
int main()
{
  int n;
  int total = 0;
  scanf("%d", &n);
  total += (n * 2) * 32;
  total += n * 32;
  printf("%d\n", total - n);
  return 0;
}