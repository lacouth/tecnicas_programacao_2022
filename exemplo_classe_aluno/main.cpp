#include "aluno.h"
#include <iostream>

using namespace std;

int main()
{

    Aluno aluno("Bruno","Araújo","20221610029",69);

    cout << aluno.nome_completo() << endl;
    aluno.setMedia(70);
    cout << aluno.status() << endl;
    cout << aluno.getMedia() << endl;


    return 0;
}
