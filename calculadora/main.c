#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
 int n1, n2;
 char op;

 printf("Calculadora: ");
 scanf("%i%c%i", &n1, &op, &n2);

 printf("n1: %i\nn2: %i", n1, n2);
 return 0;
}
