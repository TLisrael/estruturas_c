/*Crie um programa que peça ao usuario para entrar com 4 notas de um aluno, calcule sua media aritmetica, e retorne o valor dessa media calculada*/

#include <stdio.h>

int main ()
{
  int cont;
  float media , notas , total;
  total = 0;
  for (cont = 1; cont <= 4; cont++)
  {
    printf ("Insira sua nota: ");
    scanf ("%f" , &notas);
    total += notas; //Iniciou com 0 e foi acumulando a cada execução do laço.
  }
  media = total / 4;
  //printf("Media: %.2f", media);

  if (media <= 5.5)
  {
    printf ("\nMedia = %.2f. Reprovado!" , media);
  }
  else {
    printf ("\nMedia = %.2f. Aprovado!" , media);
  }


  return 0;
}
