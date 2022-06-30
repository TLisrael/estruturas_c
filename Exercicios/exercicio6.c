/*Escreva um programa para ler uma temperatura em graus Celsius, calcular e
escrever o valor correspondente em graus Fahrenheit.

Formula: ℉ = ℃ × 1,8 + 32

*/

#include <stdio.h>

int main()
{
  int c , f;

  printf ("Digite a temperatura: ");
  scanf ("%i" , &c);

  f = c * 1.8 + 32;

  printf("A temperatura %i em Fahrenheit eh: %i", c, f);

  return 0;
}
