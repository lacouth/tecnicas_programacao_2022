#include <iostream>

using namespace std;

int main()
{
    float nota = 0;
    float media = 0;
    int contador = 0;
    cout << "Informe uma nota: (x p/sair): ";
    while(cin >> nota){
        media += nota;
        contador++;
    }
    media /= contador;
    cout << "Média : " << media << endl;

    return 0;
}
