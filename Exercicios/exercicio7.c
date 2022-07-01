/*
Escreva um programa para ler o raio de um círculo, calcular e escrever a sua área.
Formula -> A = π r²
*/
#include <stdio.h>
#include <math.h>

int main () {
  float area , raio , PI;
  PI = 3.14;
  printf ("Digite o valor do raio do circulo em cm²: ");
  scanf ("%f" , &raio);
  area = PI * pow(raio, 2);
  printf ("A area do circulo eh de %.1fcm²", area);

  

}