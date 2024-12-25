#include <stdio.h>
 
int main()
{
  int primeiro, segundo, terceiro;
  char primeira_letra, segunda_letra, terceira_letra;
  int maior, menor, soma;
  scanf("%d %d %d\n", &primeiro, &segundo, &terceiro);
  scanf("%c%c%c", &primeira_letra, &segunda_letra, &terceira_letra);
  maior = primeiro;
  menor = primeiro;
  if (segundo > maior)
  {
    maior = segundo;
  }
  if (terceiro > maior)
  {
    maior = terceiro;
  }
  if (segundo < menor)
  {
    menor = segundo;
  }
  if (terceiro < menor)
  {
    menor = terceiro;
  }
  soma = primeiro + segundo + terceiro;
  if (primeira_letra == 'A')
  {
    printf("%d ", menor);
  }
  else if (primeira_letra == 'B')
  {
    printf("%d ", soma - maior - menor);
  }
  else
  {
    printf("%d ", maior);
  }
 
  if (segunda_letra == 'A')
  {
    printf("%d ", menor);
  }
  else if (segunda_letra == 'B')
  {
    printf("%d ", soma - maior - menor);
  }
  else
  {
    printf("%d ", maior);
  }
 
  if (terceira_letra == 'A')
  {
    printf("%d", menor);
  }
  else if (terceira_letra == 'B')
  {
    printf("%d", soma - maior - menor);
  }
  else
  {
    printf("%d", maior);
  }
  return 0;
}