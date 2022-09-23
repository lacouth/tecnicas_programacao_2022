#include <iostream>
#include <iomanip>

using namespace std;

struct Filme{
    int ano;
    string titulo;
    string diretor;
    float preco;
};

int main()
{
    Filme acervo[3];

    for(int i = 0; i < 3; i++){
            cout << "Informe o título do " << i+1 << " filme: ";
            getline(cin,acervo[i].titulo);
            cout << "Informe o ano do filme: ";
            cin >> acervo[i].ano;
            cin.ignore();
    }

    cout << endl << setw(30) << "Título" << setw(30) << "Ano\n";

    for(int i = 0; i < 3; i++){
        cout << setw(30) << acervo[i].titulo << setw(30) << acervo[i].ano << endl;
    }
    return 0;
}
