/*
- Encadeamento de estrutura de repetição;

*/

#include <stdio.h>

int main()
{
  int cont; 
  char caracter;
  float nota, media, valorTotal;
  valorTotal = 0;
  caracter = 'X';

  while (caracter != 'F') //Enquanto o caracter digitador for diferente de F 
{
    for ( cont = 1; cont <= 4; cont++) //Faça
    {
      printf("Informe a nota: ");
      scanf("%f", &nota);
      valorTotal += nota;
    }
    media = valorTotal / 4;
    if (media <= 5){
      printf("Aluno Reprovado\n");
    }else{
      printf("Aluno Aprovado!\n");
    }
    
    
    valorTotal = 0;
    nota = 0;
    printf("Deseja calcular a media de mais alunos? Pressione qualquer tecla para continuar ou F para encerrar:\n ");
    caracter = getche(); //pegar caractere
    
  }
  return 0;
}
