#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main()
{
    vector<float> notas;
    float nota_temp = 0;

    cout << "Insira as notas e digite x para sair: ";
    while(cin >> nota_temp){
        notas.push_back(nota_temp);
    }

    cout << "Foram inseridas " << notas.size() << " notas\n";

    for(int i = 0; i < notas.size(); i++){
        cout << notas[i] << " ";
    }
    cout << endl;

    float maior = *max_element(notas.begin(), notas.end());
    float menor = *min_element(notas.begin(), notas.end());

    cout << "A maior nota é " << maior << endl;
    cout << "A menor nota é " << menor << endl;

    cout << "Notas ordenadas: \n";
    sort(notas.rbegin(),notas.rend());

    for(int i = 0; i < notas.size(); i++){
        cout << notas[i] << " ";
    }
    cout << endl;

    return 0;
}
