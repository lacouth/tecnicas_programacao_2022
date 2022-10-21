#include <iostream>
#include <set>

using namespace std;

int main()
{

    set<int> numeros;
    int temp;
    int numero_magico = 0;
    cout << "Informe um número da sua preferência: ";
    cin >> numero_magico;
    srand(numero_magico);

    cout << "Valores gerados de acordo com o número mágico: ";
    while(numeros.size() < 6){
        temp = 1 + (rand() % 60);
        numeros.insert(temp);
    }

    for(auto n : numeros){
        cout << n << " ";
    }
    cout << endl;
    return 0;
}
