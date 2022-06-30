/* Faça um programa que lê três números reais do teclado e apresenta na tela a
média destes números. */

#include <stdio.h>

int main (int argc , char const* argv[])
{
  float n1 , n2 , n3 , media;

  printf ("*************************\n");
  printf (" Media de 3 numeros\n");
  printf ("*************************\n");
  printf ("\nDigite o primeiro numero: ");
  scanf ("%f" , &n1);
  printf ("\nDigite o segundo numero: ");
  scanf ("%f" , &n2);
  printf ("\nDigite o terceiro numero: ");
  scanf ("%f" , &n3);

  media = (n1 + n2 + n3) / 3;
  printf ("A media dos numeros digitados eh: %.2f " , media);
  return 0;
}
