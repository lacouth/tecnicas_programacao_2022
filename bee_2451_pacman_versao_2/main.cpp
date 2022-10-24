#include <iostream>
#include <string>

using namespace std;

struct Placar{
    int pontos;
    int maximo;
};

void atualizar_maximo(Placar& p){
    if(p.maximo < p.pontos){
        p.maximo = p.pontos;
    }
}

Placar atualizar_contador(char letra, Placar p){
    if( letra == 'o'){
        p.pontos++;
    }else if (letra == 'A'){
        atualizar_maximo(p);
        p.pontos = 0;
    }
    return p;
}

string inverter_linha(string linha){
    return {linha.rbegin(), linha.rend()};
}

int main()
{
    int N = 0;
    string linha;
    Placar placar = {0,0};

    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> linha;

        if(i % 2 == 0){
            for(auto letra : linha){
                placar = atualizar_contador(letra,placar);
            }
        }else{
            for(auto letra : inverter_linha(linha)){
                placar = atualizar_contador(letra, placar);
            }
        }
    }
    atualizar_maximo(placar);
    cout << placar.maximo << endl;

    return 0;
}
