/*
Faça um Programa que pergunte quanto você ganha por hora e o número de
horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês,
sabendo-se que são descontados 14% para o Imposto de Renda, 11% para o INSS e
1% para o sindicato. Calcule os descontos e o salário líquido, e exibe um relatório
conforme a tabela abaixo:
+ Salário Bruto: R$ <valor>
- IR (14%): R$ <valor>
- INSS (11%): R$ <valor>
- Sindicato (1%): R$ <valor>
= Salário Líquido: R$ <valor>
*/

#include <stdio.h>

int main()
{
  int hora;
  float valorHora, salarioBruto, impostoRenda, inss, sindicato, salarioLiquido;

  printf ("Informe quantas horas voce trabalha no mes: ");
  scanf ("%i" , &hora);
  printf ("Informe quanto voce recebe por hora: ");
  scanf ("%f" , &valorHora);

  salarioBruto = hora * valorHora;
  impostoRenda = salarioBruto * 0.14;
  inss = salarioBruto * 0.11;
  sindicato = salarioBruto * 0.01;

  salarioLiquido = salarioBruto - (impostoRenda + inss + sindicato);

  printf ("\n+ Salario Bruto: R$ %.2f" , salarioBruto);
  printf ("\n- IR (14%): R$ %.2f" , impostoRenda);
  printf ("\n- INSS (11%): R$ %.2f" , inss);
  printf ("\n= Salario Liquido: R$ %.2f" , salarioLiquido);
  
  return 0;
}
