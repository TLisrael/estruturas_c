#include <stdio.h>

int main ()
{
  puts ("*******************");
  puts ("*   TEMPERATURA   *");
  puts ("*******************");

  int temp;
  printf ("Informe a temperatura: ");
  scanf ("%i" , &temp);

  if (temp <= 20)
  {
    puts ("Frio");
  }
  else if (temp <= 30) //Senao se
  {
    puts ("Agradavel");
  }
  else if (temp <= 40)
  {
    puts ("Quente");
  }
  else //senao
  {
    ("Muito Quente");
  }

  return main ();
}
