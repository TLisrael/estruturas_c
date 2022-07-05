#include <stdio.h>
/*
O cardápio de uma lanchonete é dado abaixo. Prepare um algoritmo que leia a
quantidade de cada item que você consumiu e calcule o valor da conta final.
• X-salada..............................R$ 5.50
• X-Bacon...............................R$ 7.25
• X-Tudo................................R$ 10.30
• X-Egg.................................R$ 7.00
• Cerveja...............................R$ 4.50
• Refrigerante..........................R$ 6.00
*/

int main () {
  char caracter;
  int cont , quantidade;
  float valorProduto , total , troco , valorPago;
  total = 0;
  printf ("Lanchonete");
  printf ("\nX-salada..............................R$ 5.50\n");
  printf ("X-Bacon...............................R$ 7.25\n");
  printf ("X-Tudo................................R$ 10.30\n");
  printf ("X-Egg.................................R$ 7.00\n");
  printf ("Cerveja...............................R$ 4.50\n");
  printf ("Refrigerante..........................R$ 6.00\n");

  printf ("\nInforme o valor do produto que voce deseja: ");
  scanf ("%f" , &valorProduto);
  printf ("Informe a quantidade desejada: ");
  scanf ("%i" , &quantidade);
  total = valorProduto * quantidade;
  printf ("\nSua conta totalizou em %.2f . Informe o valor da cedula de pagamento: " , total);
  scanf ("%f" , &valorPago);
  if (valorPago < total)
  {
    printf ("\nValor pago eh menor que o valor total. Tente novamente.");
  }
  troco = valorPago - total;
  if (troco > 0)
  {
    printf ("\nSeu troco eh de %.2f. Obrigado pela compra e volte sempre!" , troco);
  }
  else
  {
    printf ("Obrigado pela compra!");
  }
  return 0;
}
