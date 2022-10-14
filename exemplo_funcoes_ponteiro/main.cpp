#include <iostream>

using namespace std;

void capitalize(string& palavras){
    for(int i = 0; i < palavras.size(); i++){
        palavras[i] = toupper(palavras[i]);
    }
}

int main()
{
    string texto = "";
    cout << "Informe um texto : ";
    getline(cin,texto);
    capitalize(texto);
    cout << texto << endl;
    return 0;
}
