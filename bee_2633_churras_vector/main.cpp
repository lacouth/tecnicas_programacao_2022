#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Carne{
    string nome;
    int validade;
};

bool compararPelaValidade(Carne a, Carne b){
    return a.validade < b.validade;
}

int main()
{
    int n;
    vector<Carne> churras;
    Carne temp;
    while(cin >> n){
        for(int i = 0; i < n; i++){
            cin >> temp.nome;
            cin >> temp.validade;
            churras.push_back(temp);
        }

        sort(churras.begin(), churras.end(), compararPelaValidade);

        cout << churras[0].nome;
        for(int i = 1; i < churras.size(); i++){
            cout << " " << churras[i].nome;
        }
        cout << endl;
        churras.clear();
    }

    return 0;
}
