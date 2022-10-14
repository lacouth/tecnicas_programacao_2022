#include <iostream>
#include "funcoes.h"

using namespace std;

int main()
{
    string nome = "";
    string saudacao = "";
    cout << "Informe o nome: ";
    cin >> nome;
    saudacao = boas_vindas(nome,"Engenharia");
    cout << saudacao << endl;
    return 0;
}
