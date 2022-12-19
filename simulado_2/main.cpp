#include <iostream>
#include <iomanip>
#include <string>
#include <map>

using namespace std;

float media_aluno(map<string,float> turma, string nome){
    float media = 0;
    if(turma.find(nome) != turma.end()){
        return turma[nome];
    }else{
        return 0;
    }
}

float media_turma(map<string,float> turma){
    float media_geral = 0;
    for(auto aluno : turma){
        media_geral += aluno.second;
    }
    return media_geral / turma.size();
}

string maior(map<string,float> turma){
    string nome;
    float maior = -1;
    for(auto [aluno,nota] : turma){
        if(maior < nota){
            maior = nota;
            nome = aluno;
        }
    }
    return nome;
}

string menor(map<string,float> turma){
    string nome;
    float menor = 101;
    for(auto [aluno,nota] : turma){
        if(menor > nota){
            menor = nota;
            nome = aluno;
        }
    }
    return nome;
}

int main() {
    map<string,float> turma;
    int N = 0;
    int M = 0;
    float nota;
    string consulta;
    string nome;

    cout << fixed << setprecision(2);

    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> nome;
        cin >> M;
        float media = 0;
        for(int j = 0; j < M; j++){
            cin >> nota;
            media += nota;
        }
        turma[nome] = media / M;
    }
    cin >> consulta;
    if(consulta == "media"){
        float media = media_turma(turma);
        cout << media << endl;
    }else if(consulta == "maior"){
        string nome_maior = maior(turma);
        cout << nome_maior << " " << turma[nome_maior] << endl;
    }else if(consulta == "menor"){
        string nome_menor = menor(turma);
        cout << nome_menor << " " << turma[nome_menor] << endl;
    }else{
        float media = media_aluno(turma,consulta);
        cout << media << endl;
    }
}
