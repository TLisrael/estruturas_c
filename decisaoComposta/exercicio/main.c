#include <stdio.h>
/*

-Com a estrutura if e else, monte um programa em que as segundas todos paguem meia entrada,
-Nos outros dias apenas crianças(de até 12 anos), estudantes e idosos(65+) paguem meia
-Na quarta casais pagam meia
*/

int main ()
{
  int estudante , casal , idade , dia;
  printf ("**************************************");
  printf ("\n*         COMPRE SEU INGRESSO        *");
  printf ("\n**************************************");
  printf ("\n0-> Domingo ");
  printf ("\n1-> Segunda");
  printf ("\n2-> Terca");
  printf ("\n3-> Quarta");
  printf ("\n4-> Quinta");
  printf ("\n5-> Sexta");
  printf ("\n6-> Sabado\n");


  printf ("\nInforme o dia da semana: ");
  scanf ("%i" , &dia);
  if (dia == 1) {
    printf ("Todos pagam meia entrada");
  }
  else {
    printf ("\nInforme sua idade: ");
    scanf ("%i" , &idade);
    if (idade <= 12 || idade >= 65) {
      puts ("Criancas de ate 12 anos e idosos com mais de 65 anos pagam meia");
    }
    else {
      printf ("\nVoce eh estudante? Digite 1 para SIM e 2 para NAO: ");
      scanf ("%i" , &estudante);
      if (estudante == 1) {
        puts ("Estudantes pagam meia");
      }
      else {
        printf ("\nEh para casal? 1 Para SIM, 2 para NAO: ");
        scanf ("%i" , &casal);
        if (dia == 3 && casal == 1) {
          printf ("Segundas e Quartas casais pagam meia entrada");
        }
        else {
          printf ("Pague inteira");
        }


      }


    }


  }
  return 0;
}
