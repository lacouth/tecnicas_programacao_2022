/* o set foi utilizado para evitar os alunos repetidos */

#include <iostream>
#include <set>

using namespace std;

int contar_alunos(set<int> turma1, set<int> turma2){
    set<int> total;
    for(auto aluno : turma1){
        total.insert(aluno);
    }

    for(auto aluno: turma2){
        total.insert(aluno);
    }

    return total.size();

}

int main()
{
    set<int> ingles;
    set<int> frances;
    set<int> total;
    int a, b;
    int id;
    cin >> a;
    for(int i = 0; i < a; i++){
        cin >> id;
        ingles.insert(id);
    }
    cin >> b;
    for(int i = 0; i < b; i++){
        cin >> id;
        frances.insert(id);
    }

    cout << contar_alunos(ingles,frances) << endl;

    return 0;
}




