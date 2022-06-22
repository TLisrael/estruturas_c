

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/* Possiveis problemas em trocar tipos de variaveis

int main(){
 int idade = 97;

 printf("Idade = %i = %c", idade, idade);
}
*/

/* Alinhando casas decimais.

int main()
{
 float preco1, preco2, preco3;

 preco1 = 22.22;
 preco2 = 185.4;
 preco3 = 21185.32;

 printf("%.2f\n%.2f\n%.2f\n", preco1, preco2, preco3);
 printf("\n\n");

 //Alinhando à direita
 printf("%12.2f\n%12.2f\n%12.2f\n", preco1, preco2, preco3);
}
*/

/*int main()
{
 int idade;
 float peso;

 idade = 24;
 peso = 60.5;

 .2f para ajustar casas decimais

 printf("Idade: %i anos \nPeso: %.2f", idade, peso);

 return (0);
}
*/

/*
- PutS() -> Imprime Strings
- PutChar() -> Imprime Caracteres
- PUTCHAR SEMPRE EM ASPAS SIMPLES


int main(void){
 puts("Eu sou uma string");
 putchar('C');
}

*/

/* Estourando o valor da variavel INT.

int main(void)
{
 int x = 2147483647 + 2;

 printf("%i", x);

 return 0;
}
*/

/* Imprimindo a tabela ASCII

int main(void)
{
 int i;
 for (i = 0; i < 256; i++)
  printf("%i=%c \n", i, i);
 return 0;
}
*/

/* Somando em C
int a, b, soma;

int main(void){
 a = 7; b = 4;
 soma = a + b;

 printf("%i", soma);

 return(0);
}
*/
