#include <iostream>
#include <set>
#include <vector>

using namespace std;

struct Aluno{
    string nome;
    int matricula;
};

bool operator<(Aluno a, Aluno b){
    return a.nome < b.nome;
}


int main()
{
    vector<Aluno> turma_cpp = {{"Bruno",123}, {"Gabriel",101},{"Fulano",321},{"Gustavo",444},{"Beltrano",333}};
    vector<Aluno> turma_py = {{"Maria",555},{"José",666},{"Beltrano",9876},{"Luiz",888},{"Bruno",999}};

    set<Aluno> turma_geral = {turma_cpp.begin(), turma_cpp.end()};
    set<Aluno> repetidos;

    for(auto aluno : turma_py){
        auto teste = turma_geral.insert(aluno);
        if(teste.second == false){
            repetidos.insert(aluno);
        }
    }

    cout << "Existem " << repetidos.size() <<" repetidos\n";
    for(auto aluno : repetidos){
        cout << aluno.nome << " - " << aluno.matricula << endl;
    }

    cout << "\n\nTotal de alunos geral: " << turma_geral.size() << endl;
    for(auto aluno : turma_geral){
        cout << aluno.nome << " - " << aluno.matricula << endl;
    }




    return 0;
}
