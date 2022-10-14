#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    float nota = 0;
    float media = 0;
    vector<int> notas_inseridas;

    cout << "Informe notas e digite x para sair: \n";
    while(cin >> nota){
        media += nota;
        notas_inseridas.push_back(nota);
    }

    media = media / notas_inseridas.size();
    cout << "Média: " << media << endl;

    sort(notas_inseridas.begin(), notas_inseridas.end());

    cout << "As notas inseridas foram: \n";
    for(int i = 0; i < notas_inseridas.size(); i++){
        cout << notas_inseridas[i] << " ";
    }
    cout << endl;
    return 0;
}
