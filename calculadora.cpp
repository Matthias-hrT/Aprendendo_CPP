/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int opcao, numero1, numero2;
    
    cout << " --->>>CALCULADORA<<<---\n";
    cout << " 1 <- Adição\n";
    cout << " 2 <- Subtração\n";
    cout << " 3 <- Divição\n";
    cout << " 4 <- Multiplicação\n";
    cout << " 5 <- Raiz\n";
    cout << " 0 <- Sair\n\n";
    cout << " Selecione a operação: ";
    cin >> opcao;
    
    if (opcao != 0){
        if (opcao == 5){
            cout << "\n Digite um número: ";
            cin >> numero1;
        }else{
            cout << "\n Digite um número: ";
            cin >> numero1;
    
            cout << "\n Digite um número: ";
            cin >> numero2;
        }
    }
    
    switch(opcao)
    {
        case 1:
            cout << "\n\n A soma é: " << (numero1 + numero2);
            cout << "\n\n";
            break;
     
        case 2:
            cout << "\n\n A subtração é: " << (numero1 - numero2);
            cout << "\n\n";
            break;
        
        case 3:
            cout << "\n\n A divisão é: " << (numero1 / numero2);
            if ((numero1 % numero2) > 0) cout << "\n O resto da divisão é: " << (numero1 % numero2);
            cout << "\n\n";
            break;
            
        case 4:
            cout << "\n\n A multiplicação é: " << (numero1 * numero2);
            cout << "\n\n";
            break;
        
        case 5:
            cout << "\n\n A raiz de " << numero1 << " é: " << (sqrt(numero1));
            break;
        
        case 0:
            cout << "\n\n !!!Tchauzinho!!!\n\n";
            break;
        
        default:
            break;
    }

    return 0;
}


