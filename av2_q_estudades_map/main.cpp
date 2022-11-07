#include <iostream>
#include <map>

using namespace std;

void adicionar_nota(map<string,int>& dados, string nome, int nota){
    dados[nome]+=nota;
}

void zerar_nota(map<string,int>& dados, string nome){
    dados[nome] = 0;
}

int main()
{
    int N = 0;
    map<string,int> turma;
    int consulta = 0;
    string nome;
    int nota;

    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> consulta;
        if(consulta == 1){
            cin >> nome;
            cin >> nota;
            adicionar_nota(turma,nome,nota);
        }else if(consulta == 2){
            cin >> nome;
            zerar_nota(turma,nome);
        }else if(consulta == 3){
            cin >> nome;
            cout << turma[nome] << endl;
        }
    }


    return 0;
}
