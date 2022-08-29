#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    srand(time(NULL));
    string palavras[3] = {"melancia", "batata", "monitor"};
    int indice = rand() % 3;
    string segredo = palavras[indice];
    string chutes = "";
    int max_tentativas = 10;
    int tentativas = 0;
    char letra = ' ';
    int acertos = 0;
    int erros = 0;

    for(int i = 0; i < segredo.size(); i++){
        cout << "_ ";
    }
    cout << endl;

    while(max_tentativas-- and acertos < segredo.size()){
        cout << "Chute uma letra: ";
        cin >> letra;
        chutes += letra;
        acertos += count(segredo.begin(),segredo.end(),letra);
        for(int i = 0; i < segredo.size(); i++){
            if(chutes.find(segredo[i]) != -1){
                cout << segredo[i] << " ";
            }else{
                cout << "_ ";
            }
        }
        cout << endl;

        cout << "Acertos: " << acertos << endl;
        cout << "Chutes: " << chutes << endl;
        cout << "Ainda restam " << max_tentativas << " tentativas\n";

    }

    return 0;
}
