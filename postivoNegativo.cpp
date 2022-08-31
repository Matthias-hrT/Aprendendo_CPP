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

