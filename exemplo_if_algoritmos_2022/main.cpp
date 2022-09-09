#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float massa = 0;
    float altura = 0;
    float IMC = 0;

    cout << "Informe a massa em kg: ";
    cin >> massa;

    cout << "Informe a altura em m: ";
    cin >> altura;

    IMC = 1.3*massa / pow(altura,2.5);

    cout << "O seu IMC é " << IMC << endl;


    if(IMC < 18.5){
        cout << "Abaixo do peso\n";
    }

    if(IMC >= 18.5 and IMC < 25){
        cout << "Peso Normal\n";
    }

    if(IMC >= 25){
        cout << "Sobrepeso\n";
    }


    return 0;
}
