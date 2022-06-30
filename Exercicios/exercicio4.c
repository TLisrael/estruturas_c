/*Escreva abaixo o código de um programa que calcule a média de quilômetros
feitos com cada litro de combustível. Solicite a entrada de dados com quilômetros e litros
e depois exiba o cálculo.

Media Etanol - 8KM;
Media Gasolina - 14KM;

14 - 8 = 6;
Etanol = km / litro - 6

*/



#include <stdio.h>

int main ()
{
  int km , litro , resposta , media;

  printf ("Digite a quantidade de quilometros percorridos: ");
  scanf ("%i" , &km);
  printf ("Digite a quantidade de litros de gasolina / etanol: ");
  scanf ("%i" , &litro);
  printf ("[1]Etanol ou [2]Gasolina: ");
  scanf ("%i" , &resposta);

  if (resposta == 1) {
    media = km / litro - 6;
    printf ("Sua media de KM feito com etanol eh: %iKM" , media);
  }

  else if (resposta == 2) {
    media = km / litro;
    printf ("Sua media de KM feito com gasolina eh: %iKM" , media);
  }
  else {
    printf ("Comando invalido");
  }
  return 0;
}
