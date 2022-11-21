#include "conta.h"
#include <iostream>

using namespace std;

int main()
{
    Conta conta;
    conta.nome = "Fulano de Tal";
    conta.n_conta = "123-X";
    conta.deposito(1000000);
    conta.extrato();
    conta.saque(200000000);


    return 0;
}
