exer10.c
#include <stdio.h>



  int main(void) {

    int voto, candidato1 = 0,candidato2 = 0,candidato3 = 0,candidato4 = 0, nulo = 0, branco = 0, totalgeral;

    //leitura
    printf("Processamento dos votos da eleição presencial\n");
    printf("Escolha o voto a ser processado dentre as opções a seguir\n");
    printf("1 - Candidato 1\n");
    printf("2 - Candidato 2\n");
    printf("3 - Candidato 3\n");
    printf("4 - Candidato 4\n");
    printf("5 - Nulo\n");
    printf("6 - Branco\n");
    printf("0 - Finaliza programa");
    printf("Opção: ");
    scanf("%d",&voto);

    while(voto!= 0)
    {
      //Letra a, b, c, parte da d e parte daa e 
      switch(voto)
      {
        case 1: candidato1++; break;
        case 2: candidato2++; break;
        case 3: candidato3++; break;
        case 4: candidato4++; break;
        case 5: nulo++; break;
        case 6: branco++; break;
        default:printf("Voto inválido\n");break;
      }
      // Proximo voto   printf
      printf("Escolha o voto a ser processado dentre as opções a seguir\n");
      printf("1 - Candidato 1\n");
      printf("1 - Candidato 2\n");
      printf("1 - Candidato 3\n");
      printf("1 - Candidato 4\n");
      printf("5 - Nulo\n");
      printf("6 - Branco\n");
      printf("0 - Finaliza programa\n");
      printf("Opção: ");
      scanf("%d",&voto);
    } //fim da repetição

    totalgeral = candidato1 + candidato2 + candidato3 + candidato4 + nulo + branco;

    //Exibição dos resultados
    printf("Total de votos 1 %d\n", candidato1);
    printf("Total de votos 2 %d\n", candidato2);
    printf("Total de votos 3 %d\n", candidato3);
    printf("Total de votos 4 %d\n", candidato4);
    printf("Total de votos nulos %d\n", nulo);
    printf("Total de votos em branco %d\n", branco);

    printf("Porcentagem dos votos nulos - %.2lf%%\n", (nulo*100.0/totalgeral));
    printf("Porcentagem dos votos em branco - %.2lf%%\n", (branco*100.0/totalgeral));





    printf("Fim do programa\n");
    return 0;
}