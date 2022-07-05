/*
Faça um programa para uma loja de tintas. O programa deverá pedir o tamanho
em metros quadrados da área a ser pintada. Considere que a cobertura da tinta é de 1
litro para cada 3 metros quadrados e que a tinta é vendida em latas de 18 litros, que
custam R$ 80,00. Informe ao usuário a quantidades de latas de tinta a serem compradas
e o preço total.
*/
#include <stdio.h>
#include <math.h>

int main()
{
  float preco, metros, litros;
  int quantidade;
  printf("Metros Quadrados: ");
  scanf("%f", &metros);

  litros = metros / 3;
  printf("Sao necessarios %.2f litro(s)", litros);

  quantidade = ceil(litros / 18); // Arredondando calculo para cima
  printf("\nquantidade de latas %i", quantidade);

  preco = quantidade * 80;
  printf("\nValor total %.2f", preco);

  return 0;
}
