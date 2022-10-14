#include <iostream>

using namespace std;

int main()
{
    int numero = 42;
    int* ponteiro;
    ponteiro = &numero;
    cout << "Número: " << numero << endl;
    cout << "Endereço de número: " <<&numero << endl;
    cout << "--------------\n";
    cout << "Valor do ponteiro: " << ponteiro << endl;
    cout << "Conteúdo do endereço: " << *ponteiro << endl;
    *ponteiro = 88;

    cout << "Novo valor de número: " << numero << endl;
    return 0;
}
