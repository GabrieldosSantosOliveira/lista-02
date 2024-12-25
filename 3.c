#include <stdio.h>
 
int main()
{
  int conta;
  float consumo;
  char consumidor;
  float valor_da_conta = 0.0;
  scanf("%d", &conta);
  scanf("%f", &consumo);
  scanf(" %c", &consumidor);
  if (consumidor == 'R')
  {
    valor_da_conta = (consumo * 0.05) + 5;
  }
  else if (consumidor == 'C' && consumo > 80)
  {
    valor_da_conta = 500 + ((consumo - 80) * 0.25);
  }
  else if (consumidor == 'C')
  {
    valor_da_conta = 500;
  }
  else if (consumidor == 'I' && consumo > 100)
  {
    valor_da_conta = 800 + ((consumo - 100) * 0.04);
  }
  else if (consumidor == 'I')
  {
    valor_da_conta = 800;
  }
 
  printf("CONTA = %d\n", conta);
  printf("VALOR DA CONTA = %.2f\n", valor_da_conta);
 
  return 0;
}