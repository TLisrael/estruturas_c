#include <stdio.h>

main()
{
 int idade;
 printf("Idade: ");
 scanf("%i", &idade);

 printf("Voce informou %i", idade );

 float x;
 printf("\n\nFloat: ");
 scanf("%f", &x);

 printf("Voce informou %.2f", x);
 return 0;
}
