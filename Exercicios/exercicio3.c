/*Faça um programa para ler dois números inteiros, x e y, e imprimir o quociente e o
resto da divisão inteira entre eles. Utilize variáveis inteiras.
*/

#include <stdio.h>

int main ()
{
  int x , y , resultado , resto;

  printf ("Digite o dividendo: ");
  scanf ("%i" , &x);
  printf ("Digite o divisor: ");
  scanf ("%i" , &y);

  resultado = x / y;
  resto = x % y;

  printf ("O quociente eh: %i" , resultado);
  printf ("\ne o resto da divisao eh : % i" , resto);

  return 0;
}
