#include <stdio.h>

/*int main()
{
  int valor;
  printf ("Digite um valor de 1 a 7: ");
  scanf ("%i" , &valor);


  switch (valor){
    case 1:
      printf ("Domingo\n");
      break;
    case 2:
      printf ("Segunda\n");
      break;
    case 3:
        printf ("Terça\n");
      break;
    case 4:
      printf ("Quarta\n");
      break;
    case 5:
      printf ("Quinta\n");
      break;
    case 6:
      printf ("Sexta\n");
      break;
    case 7:
      printf ("Sabado\n");
      break;
    default: //senao cair nos casos acima, por padrão, caíra no default
      printf ("Valor invalido");
      break;
  }
  return 0;
}
*/
int main ()
{
  char valor;
  printf ("Digite 's' para SIM e 'n' para NAO: ");
  scanf ("%c" , &valor);

  switch (valor)
  {
  case 's':
    printf ("SIM\n");
    break;
  case 'n':
    printf ("NAO\n");
    break;
     case 'S':
    printf ("SIM\n");
    break;
  case 'N':
    printf ("NAO\n");
    break;
  default:
    printf ("Valor invalido\n");
    break;
  }

  return 0;
}
