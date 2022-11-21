#include "conta.h"

Conta::Conta()
{

}

void Conta::saque(float valor){
    if(valor <= this->saldo and valor > 0){
        this->saldo -= valor;
        cout << "Saque realizado com sucesso!";
    }else{
        cout << "Valor inválido para o saque!";
    }
}

void Conta::deposito(float valor){
    if(valor > 0){
        this->saldo += valor;
        cout << "Depósito realizado com sucesso!";
    }else{
        cout << "Depósito inválido!";
    }
}

void Conta::extrato()
{
    cout << fixed << setprecision(2) << "\nR$ " << this->saldo << endl;
}
