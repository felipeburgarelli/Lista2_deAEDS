exer3.c
#include <stdio.h>

    int
    main(void)
{
  // Variáveis
  int num,
      div39 = 0, //contagem de números divisíveis por 3 e 9
      div2 = 0,  //contagem de números divisíveis por 2
      div5 = 0;  //contagem de números divisíveis por 5

  for (int i = 1; i <= 10; i++)
  {
    printf("Digite um número: ");
    scanf("%i", &num);
    if (num % 3 == 0 && num % 9 == 0)
    {
      div39++;
    }
    if (num % 2 == 0)
    {
      div2++;
    }
    if (num % 5 == 0)
    {
      div5++;
    }
    if (num % 9 != 0 && num % 5 != 0 && num % 2 != 0)
    {
      printf("Número não é divisível pelos valores\n");
    }
  }

  printf("Dentro dos 10 números %i são divisíveis por 3 e 9, %i são divisíveis por 2 e %i são divisíveis por 5\n", div39, div2, div5);

  printf("Fim do programa\n");
  return 0;
}