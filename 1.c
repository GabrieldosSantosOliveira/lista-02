#include <stdio.h>
#define QUANTIDADE_DE_NOTAS 3.0
int main()
{
  double soma = 0;
  double nota;
  int i = 0;
  while (i < QUANTIDADE_DE_NOTAS)
  {
    scanf("%lf", &nota);
    soma += nota;
    i++;
  }
 
  double media = soma / QUANTIDADE_DE_NOTAS;
  printf("MEDIA = %.2lf\n", media);
  if (media >= 6)
  {
    printf("APROVADO\n");
  }
  else
  {
    printf("REPROVADO\n");
  }
  return 0;
}