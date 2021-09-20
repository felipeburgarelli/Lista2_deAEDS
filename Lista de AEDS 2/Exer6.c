Exer6.c
#include <stdio.h>

int main(void) {

  int n;
  int i;
  double S = 0; //Variável para calcular a soma da expressão 

  printf("Digite um valor inteiro e positivo para n: ");
  scanf("%i",&n);

  for(i=1;i<=n;i++)
  {
  S +=(double) 1/i;
  }

  printf("O valor da expressão S é %lf\n",S);
  printf("Fim do programa\n");
  return 0;
}