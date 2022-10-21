#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main()
{
    vector<string> turma_cpp = {"Bruno", "Gabriel","Fulano","Gustavo","Beltrano"};
    vector<string> turma_py = {"Maria","José","Beltrano","Luiz","Bruno"};

    set<string> turma_geral = {turma_cpp.begin(), turma_cpp.end()};
    set<string> repetidos;

    for(auto aluno : turma_py){
        auto teste = turma_geral.insert(aluno);
        if(teste.second == false){
            repetidos.insert(aluno);
        }
    }

    cout << "Existem " << repetidos.size() <<" repetidos\n";
    for(auto aluno : repetidos){
        cout << aluno << endl;
    }

    cout << "\n\nTotal de alunos geral: " << turma_geral.size() << endl;
    for(auto aluno : turma_geral){
        cout << aluno << endl;
    }




    return 0;
}
