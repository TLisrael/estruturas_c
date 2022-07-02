#include <stdio.h>

int main(int cont)
{
  float nota, media, total;

  total = 0; //Inicia o valor total das notas em zero, pois não há dados inseridos.
  cont = 1; //Contador inicia pelo primeiro dado inserido.

  while (cont <= 4) // ENQUANTO o contador for menor ou igual a quatro
  {
    printf("Informe a nota: ");
    scanf("%f", &nota);

    total += nota; // Total = total + nota. 
    cont++; //incremento. Quando der falso, a estrutura vai acabar com a repetição. 
  }
  media = total / 4;
  //printf("Media: %.2f\n", media);

  if (media <= 5.50 ){
    printf("Media %.2f. Reprovou!", media);
  }else{
    printf("Media %.2f. Aprovou!", media);
  }
  return 0;
}
