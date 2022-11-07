/*

*/

#include <iostream>
#include <vector>

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

int main()
{
    int N = 0;
    vector<string> tabuleiro;
    string linha;
    Placar placar = {0,0};

    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> linha;
        tabuleiro.push_back(linha);
    }

    for(int i = 0; i < N; i++){
        if(i % 2 == 0){
            for(int j = 0; j < N; j++){
                placar = atualizar_contador(tabuleiro[i][j],placar);
            }
        }else{
            for(int j = N -1; j >= 0; j--){
                placar = atualizar_contador(tabuleiro[i][j], placar);
            }
        }
    }
    atualizar_maximo(placar);
    cout << placar.maximo << endl;

    return 0;
}
