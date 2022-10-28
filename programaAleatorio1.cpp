#include <iostream>
#include <vector>

using namespace std;

void printNumbers(vector<int> numbers)
{
    if (numbers.size() == 0)
    {
        cout << "[] - A lista esta vazia" << endl;
    }
    else
    {
        cout << "[ ";
        for (auto i : numbers)
        {
            cout << i << " ";
        }
        cout << "]" << endl;
    }
    return;
}

void addNumbers(vector<int> *numbers)
{
    int novoNumero;

    cout << "Digite um numero: ";
    cin >> novoNumero;

    numbers->push_back(novoNumero);

    cout << novoNumero << " adicionado" << endl;

    return;
}

void smallestNumber(vector<int> numbers)
{
    int aux = numbers.at(0);
    if (numbers.size() == 0)
    {
        cout << "[] - A lista esta vazia" << endl;
    }
    else
    {
        for (size_t i = 0; i < numbers.size(); i++)
        {
            if (aux > numbers[i])
            {
                aux = numbers.at(i);
            }
        }
        cout << "O menor numero eh: " << aux << endl;
    }
    return;
}

void biggestNumber(vector<int> numbers)
{
    int aux = numbers.at(0);
    if (numbers.size() == 0)
    {
        cout << "[] - A lista esta vazia" << endl;
    }
    else
    {
        for (size_t i = 0; i < numbers.size(); i++)
        {
            if (aux < numbers[i])
            {
                aux = numbers.at(i);
            }
        }
        cout << "O maior numero eh: " << aux << endl;
    }
    return;
}

int main()
{
    vector<int> numbers{};
    int loop{false};
    char opcao{};

    do
    {
        cout << "\nEscolha uma opcao" << endl;
        cout << "P - Printar os numeros" << endl;
        cout << "A - Adicionar um numero" << endl;
        cout << "S - Mostrar o menor numero" << endl;
        cout << "B - Mostrar o maior numero" << endl;
        cout << "Q - Sair do programa" << endl;
        cout << "Opcao: ";
        cin >> opcao;
        switch (opcao)
        {
        case 'P':
        case 'p':
            printNumbers(numbers);
            break;

        case 'A':
        case 'a':
            addNumbers(&numbers);
            break;

        case 'S':
        case 's':
            smallestNumber(numbers);
            break;

        case 'B':
        case 'b':
            biggestNumber(numbers);
            break;

        case 'Q':
        case 'q':
            loop = true;
            break;

        default:
            cout << "Invalid Option!!" << endl;
            break;
        }

    } while (loop == false);

    return 0;
}