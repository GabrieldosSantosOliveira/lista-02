#include <stdio.h>
 
int main()
{
  int carbono, dureza_rockwell, resistencia_a_tracao;
  scanf("%d", &carbono);
  scanf("%d", &dureza_rockwell);
  scanf("%d", &resistencia_a_tracao);
  if (carbono < 7 && dureza_rockwell > 50 && resistencia_a_tracao > 80000)
  {
    printf("ACO DE GRAU = 10\n");
  }
  else if (carbono < 7 && dureza_rockwell > 50)
  {
    printf("ACO DE GRAU = 9\n");
  }
  else if (carbono < 7)
  {
    printf("ACO DE GRAU = 8\n");
  }
  else
  {
    printf("ACO DE GRAU = 7\n");
  }
  return 0;
}