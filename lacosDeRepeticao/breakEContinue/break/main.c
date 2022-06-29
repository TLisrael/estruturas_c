#include <stdio.h>

int main () {
  for (int i = 0; i <= 10; i++)
  {
    if ( i == 3  ) { // quando chega até 3, ele pausa o programa.
      break;
    }
    printf ("\n%i" , i);
  }
  return 0;

}