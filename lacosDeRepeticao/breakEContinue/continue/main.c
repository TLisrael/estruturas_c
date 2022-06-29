#include <stdio.h>

int main () {
  for (int i = 0; i <= 10; i++)
  {
    if (i > 5 || i == 3  ) { //De zero até 5 imprime, a partir de 5 não imprime mais.
      continue;
    }
    printf ("\n%i" , i);
  }
  return 0;

}