#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    string nome;
    char letra = 'n';
    int contador = 0;
    int contador_n = 0;


    cout << "Informe o seu nome: ";
    cin >> nome;
    cout << "Oi, " << nome << endl;
    contador = nome.size();

    cout << "O seu nome tem " << contador << " letras\n";
    if(nome.find(letra) != -1){
        cout << "A letra " << letra << " existe no nome\n";

    }else{
        cout << "A letra " << letra << " não existe\n";
    }

    contador_n = count(nome.begin(),nome.end(),letra);

    cout << "O nome possui " << contador_n << " letras n\n";


    return 0;
}
