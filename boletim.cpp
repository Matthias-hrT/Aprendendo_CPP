/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

int main()
{
    int nota;
    
    cout << "Digite sua nota: ";
    cin >> nota;
    
    if (nota >= 60 && nota <= 100)
    {
        cout << "\n\nVocê está aprovado!!\n\n";
    }
    else if(nota < 60 && nota >= 30)
    {
        cout << "\n\nVocê está de exame!!\n\n";
    }
    else if(nota < 30 && nota >=0)
    {
        cout << "\n\nVocê está reprovado!!\n\n";
    }
    else
    {
        cout << "\n\nA nota inserida é inválida!!\n\n";
        std::this_thread::sleep_for(std::chrono::seconds(2));
        cout << "\n\n!!!ENCERRANDO O PROGRAMA!!!\n\n";
    }
    
    return 0;
}