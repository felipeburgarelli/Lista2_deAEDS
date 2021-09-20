#include <stdio.h>

int main(void)
{
  int N,
      fat = 1,
      i;
  double E = 0;

  printf("Digite o valor de N para se calcular o valor de E: ");
  scanf("%i", &N);

  for (i = 1; i <= N; i++)
  {

    E += (double)1 / fat;

    fat = i * fat;
  }

  printf("O valor da expressão E é %lf\n", E);

  printf("Fim do programa\n");
  return 0;
}