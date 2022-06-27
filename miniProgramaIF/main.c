#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
 int idade;
 char nome[50];



 puts("*******************");
 puts("*    DETRAN RJ    *");
 puts("*******************");
 printf("\n\nOla, candidato. Para iniciar, digite o seu nome: ");
 gets(nome);
 printf("\n\nSeja bem vindo, %s! Para continuar, digite sua idade: ", nome);
 scanf("%i", &idade);

 if (idade < 18)
 {
  int faltam = 18 - idade;
  if (faltam == 1)
  {
   printf("\n%s, infelizmente voce ainda nao possui maior idade. Voce pode tentar novamente daqui 1 ano.");
  }
  else
  {
   printf("\n%s, infelizmente voce ainda nao possui maior idade. Voce pode tentar novamente daqui %i anos.", nome, faltam);
  }
 }
 else
 {
  char carteiraDeMotorista;

  printf("\n%s, voce eh maior de idade e possui %i anos. Continue seu cadastro", nome, idade);
  printf("\n\nVoce possui carteira de motorista? (S/N): ");
  scanf("%i", &carteiraDeMotorista);
  if (carteiraDeMotorista == 'S' && carteiraDeMotorista == 's')
  {
   printf("A data para sua prova será enviada por email assim que a agenda estiver aberta.");
  }
  else
  {
   printf("\nPara efetuar o exame, voce precisa ter uma carteira de motorista. Faca seu cadastro agora mesmo!");
   printf("\nAcesse o site https://www.detranrj.com.br e efetue o cadastro.\n\n");
  }
 }

 return 0;
}

/*
Tabela Verdade do OU
-V OU V => V
-V OU F => V
-F OU V => V
-F OU F => F

Tabela Verdade do E
-V E V => V
-V E F => F
-F E V => F
-F E F => F

*/
