/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int
main ()
{
  int numero;

  cout << "Digite um nÚmero: ";
  cin >> numero;

  if (numero > 0 && (numero % 2) == 0)
    {
      cout << "O número digitado é par e positivo!!\n\n";
    }
  else if (numero > 0 && (numero % 2) != 0)
    {
      cout << "O número digitado é impar e positivo!!\n\n";
    }
  else if (numero < 0)
    {
      cout << "O número digitado é negativo!!\n\n";
    }
  else
    {
      cout << "O número digitado é Zero!!\n\n";
    }
  return 0;
}

