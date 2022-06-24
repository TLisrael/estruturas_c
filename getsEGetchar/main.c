#include <stdio.h>


 main()
{
 //cria uma variável para armazenar uma string
 char p1[10]; 
 puts("Informe seu nome: ");
 //captura entrada do usuario
 gets(p1);
 //Imprime o que foi capturado
 puts(p1);
 printf("Seu nome eh: %s", p1);
 return 0;
}
