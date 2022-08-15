#include <iostream>

using namespace std;

int main()
{
    float numero = 0;
    cout << "Informe um valor: ";
    cin >> numero;
    if(numero >= 0 and numero <= 25){
        cout << "Intervalo [0,25]" << endl;
    }else if(numero > 25 and numero <= 50){
        cout << "Intervalo (25,50]" << endl;
    }else if(numero > 50 and numero <= 75){
        cout << "Intervalo (50,75]" << endl;
    }else if(numero > 75 and numero <= 100){
        cout << "Intervalo (75,100]" << endl;
    }else{
        cout << "Fora de intervalo" << endl;
    }
    return 0;
}
