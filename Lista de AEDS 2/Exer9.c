Exer9.c
#include <stdio.h>

int main(void) {
  double compra, venda, lucro, compratotal=0,vendatotal=0;
  int produto=0, //Para determinar o produto de acordo com o lucro
      lucroate10=0, //Para calcular produtos que deram menos de 10% de lucro
      lucroate20=0, //Para calcular produtos que deram menos de 20% de lucro
      lucromaior20=0; //Para calcular produtos que deram mais de 20% de lucro


  printf("Digite o valor da compra do produto(0 finaliza o programa): ");
  scanf("%lf",&compra);
  compratotal += compra;

  while(compra !=0)
  {
    printf("Digite o valor da venda do produto:");
    scanf("%lf",&venda);

    produto++;

    // Cálculo de lucro
    lucro = 100/compra*venda;

    // Cálculo letra B
    compratotal+=compra;
    vendatotal+=venda;
    
    if(lucro<0.10)
    {
      lucroate10++;
    }
    else if(lucro<=0.2)
    {
      lucroate20++;
    }
    else 
      lucromaior20++;

    printf("Digite o valor da compra do produto(0 finaliza o programa): ");
  scanf("%lf",&compra);
  }
  // Letra A 
  printf("Teve %i produtos com lucro menor que 10%%", lucroate10);
  printf("Teve %i produtos com lucro maior ou igual a 10%% menor ou igual a 20%%", lucroate20);
  printf("Teve %i produtos com lucro maior que 20%%",lucromaior20);

  // Letra B
  printf("O valor total de compra foi %.2lf\n O valor de venda totol foi de %.2lf\n O lucro total foi de %.2lf", compratotal,vendatotal,(vendatotal-compratotal));


  printf("Fim do programa\n");
  return 0;
}