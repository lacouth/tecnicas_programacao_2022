#ifndef CONTA_H
#define CONTA_H
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

class Conta
{
private:
    float saldo;
public:
    Conta();
    string nome;
    string n_conta;
    void saque(float valor);
    void deposito(float valor);
    void extrato();
};

#endif // CONTA_H
