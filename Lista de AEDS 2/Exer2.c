#include <stdio.h>

int main(void)
{
  int num;
  double porc, posi = 0, neg = 0, zeros = 0, total = 0;

  printf("Digite um númere (010 finaliza o programa): ");
  scanf("%i", &num);

  while (num != 010)
  {
    if (num > 0)
    {
      posi++;
    }
    else if (num == 0)
    {
      zeros++;
    }
    else
      neg++;
    total++;
    printf("Digite mais um númere (010 finaliza o programa): ");
    scanf("%i", &num);
  }

  // Cálculo e impressão dos resultados
  porc = 100 / total;

  printf("Dentro dos números fornecidos %.2lf%% é positivo, %.2lf%% é negativo e %.2lf%% é zero\n", porc * posi, porc * neg, porc * zeros);

  printf("Fim do programa\n");
  return 0;
}