#include <stdio.h>
int main()
{
  double n;
  unsigned int matricula = 0;
  double notas_provas = 0;
  double notas_listas = 0;
  double nota_trabalho_final = 0;
  double frequencia = 0;
  int t = 0;
  while (t == 0)
  {
    int i = 0;
    while (i < 16)
    {
      scanf("%lf", &n);
      if (n == -1)
      {
        t = -1;
        break;
      }
      if (i == 0)
      {
        matricula = (unsigned int)n;
      }
      else if (i <= 8)
      {
        notas_provas += n;
      }
      else if (i <= 13)
      {
        notas_listas += n;
      }
      else if (i == 14)
      {
        nota_trabalho_final = n;
      }
      else if (i == 15)
      {
        frequencia = n;
      }
      i++;
    }
    if (t == 0)
    {
      float nota = 0;
      nota = (0.7 * (notas_provas / 8)) + (0.15 * (notas_listas / 5)) + (0.15 * nota_trabalho_final);
      float freqencia_minima = 128 * 0.75;
      if (frequencia >= freqencia_minima && nota >= 6)
      {
        printf("Matricula: %u, Nota Final: %.2lf, Situacao Final: APROVADO\n", matricula, nota);
      }
      else if (frequencia >= freqencia_minima && nota < 6)
      {
        printf("Matricula: %u, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA\n", matricula, nota);
      }
      else if (frequencia < freqencia_minima && nota >= 6)
      {
        printf("Matricula: %u, Nota Final: %.2lf, Situacao Final: REPROVADO POR FREQUENCIA\n", matricula, nota);
      }
      else if (frequencia < freqencia_minima && nota < 6)
      {
        printf("Matricula: %u, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA E POR FREQUENCIA\n", matricula, nota);
      }
      matricula = 0.0;
      notas_provas = 0.0;
      notas_listas = 0.0;
      nota_trabalho_final = 0.0;
      frequencia = 0.0;
    }
  }
  return 0;
}