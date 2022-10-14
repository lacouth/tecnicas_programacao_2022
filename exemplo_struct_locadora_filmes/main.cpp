#include <iomanip>
#include <iostream>
#define TAM 5

using namespace std;

struct Filme {
  string titulo;
  string diretor;
  int ano;
  float preco;
};

void cadastrar_filmes(Filme dados[]) {

  for (int i = 0; i < TAM; i++) {
    cout << "Informe o título do " << i + 1 << " filme: ";
    getline(cin, dados[i].titulo);
    cout << "Informe o ano do filme: ";
    cin >> dados[i].ano;
    cin.ignore();
    cout << "Informe o preço da diária: ";
    cin >> dados[i].preco;
    cin.ignore();
  }
}

void listar_filmes(Filme dados[]) {

  cout << endl << setw(30) << "Título" << setw(30) << "Ano\n";

  for (int i = 0; i < TAM; i++) {
    cout << setw(30) << dados[i].titulo << setw(30) << dados[i].ano << endl;
  }
}

int main() {

  Filme acervo[TAM];

  cadastrar_filmes(acervo);
  listar_filmes(acervo);

  return 0;
}
