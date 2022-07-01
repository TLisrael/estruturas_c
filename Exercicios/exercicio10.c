/*

Faça um Programa que receba um valor de combustível, calcule e mostre o valor
desse mesmo combustível saído da refinaria e todos os valores incluídos no preço final,
com base nos seguintes percentuais de despesas e impostos (Referência:
http://www.petrobras.com.br/ pt/produtos/composicao-de-precos/).

• 17% - Distribuição e Revenda
• 12% - Custo Etanol Anidro
• 28% - ICMS
• 7% - CIDE, PIS/PASEP e COFINS

A saída do programa deve obedecer ao seguinte formato:
+ Valor na bomba: R$ <valor>
- Distribuição e Revenda (17%): R$ <valor>
- Custo Etanol Anidro (12%): R$ <valor>
- ICMS (28%): R$ <valor>
- CIDE, PIS/PASEP e COFINS (7%): R$ <valor>
= Valor da refinaria: R$ <valor>

*/

#include <stdio.h>

int main ()
{
  float valorCombustivel , distribuicao , etanolAnidro , icms , pisPasep , refinaria;
  
  printf ("Informe o valor do combustivel: ");
  scanf ("%f" , &valorCombustivel);

  distribuicao = valorCombustivel * 0.17;
  etanolAnidro = valorCombustivel * 0.12;
  icms = valorCombustivel * 0.28;
  pisPasep = valorCombustivel * 0.07;
  refinaria = valorCombustivel - distribuicao - etanolAnidro - icms - pisPasep;

  printf ("\n+ Valor na bomba: R$ %.2f" , valorCombustivel);
  printf ("\n- Distribuicao e Revenda(17%): R$ %.2f " , distribuicao);
  printf ("\n- Custo Etanol Anidro(12%): R$ %.2f" , etanolAnidro);
  printf ("\n- ICMS(28%):R$ %.2f" , icms);
  printf ("\n- CIDE, PIS/PASEP e COFINS(7%): R$ %.2f" , pisPasep);
  printf ("\n= Valor da refinaria: R$ %.2f" , refinaria);
  
  return 0;
}
