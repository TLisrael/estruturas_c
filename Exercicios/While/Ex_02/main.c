/*
Técnica para controlar o numero de vezes de repetição realizada utilizando uma flag
(Variavel utilizada com "sentinela". a qual determinará quando o laço deve ser encerrado.)
--> Flag = confição de saída de um laço de repetição
*/

/*
Enunciado:
Escreva um programa que peça ao user para entrar com um numero indeterminado de
valores, e retorna a media aritmetica desses valores no final.
--> Para que o programa saiba quando deve parar de requisitar a entrada de dados, o user deve digitar o número -1.
*/

#include <stdio.h>

int main ()
{
  int cont;
  cont = 0; // Contador iniciando do zero para a contagem de vezes de loop
  float total , valor , media;
  total = 0; //Sem dados inseridos

  printf ("Informe um valor.(-1 para encerrar): ");
  scanf ("%f" , &valor);

  while (valor != -1) {
    total += valor; // total = total + valor
    cont++; //incremento obrigatorio;
    printf ("Informe um valor.(-1 para encerrar): ");
    scanf ("%f" , &valor);
  }

  media = total / cont;
  printf("Media: %.2f", media);
  return 0;
}
