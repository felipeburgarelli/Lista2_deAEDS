Exer7.c
#include <stdio.h>

    int
    main(void)
{
  int a = 1, b = 1, cont,
      L; //Quantidade de números que vão aparecer

  printf("Qunatos elementos você quer que aparece da série fibonacci: ");
  scanf("%i", &L);

  for (int i = 1; L > i; i++)
  {
    cont = a + b;
    printf("%d\n", cont);
    a = b;
    b = cont;
  }

  printf("\nFim do programa\n");
  return 0;
}