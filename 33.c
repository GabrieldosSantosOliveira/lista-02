#include <stdio.h>
 
int primeiro_digito_dv(int ns)
{
  int oitavo_digito = ns % 10;
  int setimo_digito = ((ns % 100) - oitavo_digito) / 10;
  int sexto_digito = ((ns % 1000) - oitavo_digito - setimo_digito) / 100;
  int quinto_digito = ((ns % 10000) - oitavo_digito - setimo_digito - sexto_digito) / 1000;
  int quarto_digito = ((ns % 100000) - oitavo_digito - setimo_digito - sexto_digito - quinto_digito) / 10000;
  int terceiro_digito = ((ns % 1000000) - oitavo_digito - setimo_digito - sexto_digito - quinto_digito - quarto_digito) / 100000;
  int segundo_digito = ((ns % 10000000) - oitavo_digito - setimo_digito - sexto_digito - quinto_digito - quarto_digito - terceiro_digito) / 1000000;
  int primeiro_digito = (ns - oitavo_digito - setimo_digito - sexto_digito - quinto_digito - quarto_digito - terceiro_digito - segundo_digito) / 10000000;
  int primeiro_digito_dv = ((primeiro_digito * 2) + (segundo_digito * 3) + (terceiro_digito * 4) + (quarto_digito * 5) + (quinto_digito * 6) + (sexto_digito * 7) + (setimo_digito * 8) + (oitavo_digito * 9)) % 11;
  if (primeiro_digito_dv == 10)
  {
    return 0;
  }
  return primeiro_digito_dv;
}
int dv(int ns, int uf)
{
  int segundo_digito = uf % 10;
  int primeiro_digito = (uf - segundo_digito) / 10;
  int terceiro_digito = primeiro_digito_dv(ns);
  int segundo_digito_dv = (((primeiro_digito * 7) + (segundo_digito * 8) + (terceiro_digito * 9)) % 11);
  if (segundo_digito == 10)
  {
    return 0 + (terceiro_digito * 10);
  }
  return segundo_digito_dv + (terceiro_digito * 10);
}
int main()
{
  int ns, uf;
  scanf("%d%d", &ns, &uf);
  if (uf < 1 || uf > 28)
  {
    printf("CODIGO DA UF INVALIDO!\n");
    return 0;
  }
  printf("%d%.2d/%.2d\n", ns, uf, dv(ns, uf));
  return 0;
}