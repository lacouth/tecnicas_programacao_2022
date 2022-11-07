#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Resultado{
    string tipo;
    int posicao;
};

Resultado procurar(vector<int> valores, int pesquisa){

    auto pos = find(valores.begin(),valores.end(),pesquisa);
    Resultado r;
    if(pos != valores.end()){
        r.tipo = "Sim";
        r.posicao = (pos - valores.begin()) + 1;
    }else{
        int idx = 0;
        while(valores[idx] < pesquisa){
            idx++;
        }
        r.tipo = "Não";
        r.posicao = idx + 1;
    }
    return r;
}

int main()
{
    int N = 0;
    int Q = 0;
    int temp = 0;
    int valor = 0;
    Resultado r;
    vector<int> numeros;

    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> temp;
        numeros.push_back(temp);
    }
    sort(numeros.begin(),numeros.end());
    cin >> Q;
    for (int i = 0; i < Q; i++){
        cin >> valor;
        r = procurar(numeros,valor);
        cout << r.tipo << " " << r.posicao << endl;

    }
    return 0;
}










