/*Faça um programa para resolver a equação: x=(32−y)/(2a+b). Sendo a=10, b=2 e
y=5. */

#include <stdio.h>

int main ()
{
  int a , b , y , x , v ,valor, resto;

  a = 10;
  b = 2;
  y = 5;

  x = (32 - y);
  v = (2 * a + b);
  valor = x / v;
  resto = x % v;
  printf ("Valor da equacao: %i" , valor);
  printf ("\nResto: %i" , resto);

  return 0;
}


