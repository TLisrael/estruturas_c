/*Faça um programa que pede para o operador digitar uma letra, um número inteiro
e um número real. Em seguida o programa deve ler estes dados, armazená-los nos tipos
de dados adequados e imprimi-los na tela. */

#include <stdio.h>

int main ()
{
  int inteiro;
  float real;
  char caractere;

  printf ("Digite uma letra: ");
  scanf ("%c" , &caractere);
  printf ("Digite um numero real: ");
  scanf ("%f" , &real);
  printf ("Digite um numero inteiro: ");
  scanf ("%i" , &inteiro);


  printf ("\nLetra: %c\n Numero Real: %.1f\n Numero Inteiro: %i", caractere, real, inteiro);
  return 0;
}
