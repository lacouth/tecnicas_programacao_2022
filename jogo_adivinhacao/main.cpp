#include <iostream>

using namespace std;

int main()
{
    srand(time(NULL));
    int segredo = rand() % 101 ;
    int chute = 0;
    int tentativas = 0;
    int max_tentativas = 10;

    cout << "Bem vindo ao jogo da adivinhação!\n";
    cout << "Você tem " << max_tentativas << " tentativas para acertar o segredo\n";
    cout << "O número está entre 0 e 100\n";


    do{
        cout << "Me diga qual é o seu chute: ";
        cin >> chute;
        tentativas++;
        if(chute > segredo){
            cout << "O seu chute foi alto\n";
        }else if (chute < segredo){
            cout << "O seu chute foi baixo\n";
        }else{
            cout << "Você acertou o segredo\n";
            cout << "Você acertou em " << tentativas << " tentativa(s)\n";
            return 0;
        }
        cout << "Você ainda tem " << max_tentativas - tentativas << " tentativas\n";

    }while(tentativas < max_tentativas);

    cout << "Você não acertou o segredo\n";
    cout << "O segredo era " << segredo << endl;
    cout << "Boa sorte na próxima\n";


    return 0;
}


