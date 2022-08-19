#include <iostream>

using namespace std;

int main()
{
    int valor = 0;
    int resto = 0;
    int notas_100 = 0;
    int notas_50 = 0;
    int notas_20 = 0;
    int notas_10 = 0;
    int notas_5 = 0;
    int notas_2 = 0;
    int notas_1 = 0;

    cin >> valor;

    notas_100 = valor / 100;
    resto = valor % 100;

    notas_50 = resto / 50;
    resto = resto % 50;

    notas_20 = resto / 20;
    resto = resto % 20;

    notas_10 = resto / 10;
    resto = resto % 10;

    notas_5 = resto / 5;
    resto = resto % 5;

    notas_2 = resto / 2;
    resto = resto % 2;

    cout << notas_100 << " nota(s) de R$ 100,00\n";
    cout << notas_50 << " nota(s) de R$ 50,00\n";
    cout << notas_20 << " nota(s) de R$ 20,00\n";
    cout << notas_10 << " nota(s) de R$ 10,00\n";
    cout << notas_5 << " nota(s) de R$ 5,00\n";
    cout << notas_2 << " nota(s) de R$ 2,00\n";
    cout << resto << " nota(s) de R$ 1,00\n";

}
