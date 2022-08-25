/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x1, x2, y1, y2, distancia;
    
    cout << "Digite o valor de x1: ";
    cin >> x1;
    
    cout << "Digite o valor de y1: ";
    cin >> y1;
    
    cout << "Digite o valor de x2: ";
    cin >> x2;
    
    cout << "Digite o valor de y2: ";
    cin >> y2;
    
    distancia = (sqrt((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
    
    cout << "\n\nA distância entre os pontos é: " << distancia;
    
    return 0;
}