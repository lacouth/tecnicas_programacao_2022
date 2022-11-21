#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Aluno{
private:
    string senha;
public:
    string nome;
    string matricula;
    float notas[3];
    float media(){
        float m = (notas[0] + notas[1] + notas[2]) / 3.0;
        return m;
    }
    bool definir_senha(string senha){
        if(senha.size() < 6){
            cout << "Senha inválida!";
                return false;
        }else{
            this->senha = senha;
            return true;
        }
    }

    string mostrar_senha(){
        string senha_segredo = "";
        for(int i = 0; i < senha.size(); i++){
            if(i < 3){
                senha_segredo += senha[i];
            }else{
                senha_segredo += "*";
            }
        }
        return senha_segredo;
    }
};

int main()
{
    Aluno aluno;
    aluno.nome = "Fulano de Tal";
    aluno.matricula = "20222610001";
    aluno.notas[0] = 100;
    aluno.notas[1] = 80;
    aluno.notas[2] = 60;
    aluno.definir_senha("123456");

    cout << aluno.media() << endl;
    cout << aluno.mostrar_senha() << endl;

    return 0;
}
