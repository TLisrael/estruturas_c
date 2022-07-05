/*
Escreva um programa que calcule a fórmula de Bhaskara. As entradas serão a, b,
e c referentes a uma equação de segunda grau do tipo ax²+bx+c e a saída serão as
duas raízes r1 e r2.
*/

#include <stdio.h>
#include <math.h>

int main()
{
  float a, b, c, r1, r2, delta;
  printf("A = ");
  scanf("%f", &a);
  printf("B = ");
  scanf("%f", &b);
  printf("c = ");
  scanf("%f", &c);

  printf("\nEquacao: \n%.2fX²%+.2fX%+.2f\n\n", a,b,c);
  //Processamento
  delta = pow(b, 2) - 4 * a * c;

  r1 = (-b + sqrt(delta)) / (2 * a);
  r2 = (-b - sqrt(delta)) / (2 * a);

  //Saida
  printf("R1 = %.2f", r1);
  printf("\nR2 = %.2f", r2);

  return 0;
}
