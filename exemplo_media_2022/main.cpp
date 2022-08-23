#include <iostream>

using namespace std;

int main()
{
    float acumulador = 0;
    float nota = 0;
    int contador = 0;
    string resposta = "";
    do{
        cout << "Informe uma nota: ";
        cin >> nota;
        acumulador += nota;
        contador++;
        cout << "Deseja inserir outra nota? ";
        cin >> resposta;
    }while(resposta=="sim");

    cout << "A média é :" << acumulador / contador << endl;
}
