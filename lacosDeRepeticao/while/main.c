#include <stdio.h>

int main (int i , int y)
{
  i = 0;
  while (i <= 10) //enquanto i for menor ou igual a 5 faça...
  {
    printf ("%i\n" , i);
    i++; // incremento. i + 1
  }
  printf ("******************************\n");
  y = 10;
  while (y >= 0) //enquanto i for menor ou igual a 5 faça...
  {
    printf ("%i\n" , y);
    y--; // decremento. i - 1
  }
  return 0;
}

