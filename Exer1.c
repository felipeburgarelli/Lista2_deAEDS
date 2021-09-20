#include <stdio.h>

int main(void) {
  int num, posi = 0, neg = 0, zeros = 0;

  printf("Digite um númere (010 finaliza o programa): ");
  scanf("%i",&num);

  while(num != 010 )
  {
    if(num>0)
    {
      posi ++;
    }
    else if (num==0)
    {
      zeros ++;
    }
    else 
      neg++;

    printf("Digite mais um númere (010 finaliza o programa): ");
    scanf("%i",&num);

  } 

  printf("Dentro dos números fornecidos tem %i positivos, %i negativos e %i zeros\n", posi, neg, zeros);





  printf("Fim do programa\n");
  return 0;
}
