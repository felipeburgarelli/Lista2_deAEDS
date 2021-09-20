Exer5.c
#include <stdio.h>

int main(void) {

  double salario,
    maiorSalario = 0, //valor baixo para que o primeiro salario seja contabilizado
    totalSalario = 0,
    totalFilho;
  int filhos,
    hab = 0,//Quantidade de pessoas entrevistadas
    salBaixo;//salário até 100
  printf("Digite o salário: ");
  scanf("%lf",&salario);

  while(salario>0)
  {
    // Leitura da quantidade de filhos
    printf("Digite quantos filhos você tem: ");
    scanf("%i",&filhos);

    //Cálculo parciais das letras A e B
    hab ++;
    totalSalario += salario;
    totalFilho+=filhos;

    if(salario>maiorSalario)
    {
      maiorSalario= salario;
    }
    if(salario<100)
    {
      salBaixo ++;
    }


    // Leitura do novo salário 
    printf("Digite o salário de outro habitante(valor negativo encerra o programa): ");
    scanf("%lf",&salario);
  }
  
  // Letra A
  printf("A média do salário da população é %.2lf\n",totalSalario/hab);
  
  // Letra B
  printf("A média de filhos é %.2lf\n",totalFilho/hab);

  // Letra C 
  printf("O maior salário é %.2lf\n", maiorSalario);

  // Letra D
  printf("O percentual de pessoas com salátio até R$100,00 é %.2lf%%\n", (double)100*salBaixo/hab);  





  printf("Fim do programa\n");
  return 0;
}