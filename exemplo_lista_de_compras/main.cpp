#include <iostream>
#include <iomanip>
#include <map>
#include <string>

using namespace std;

struct QuantidadePreco{
    int quantidade;
    float preco;
};


int main()
{
    cout << fixed << setprecision(2);

    map<string,QuantidadePreco> lista;
    string produto;
    QuantidadePreco temp;
    string resp;
    float total = 0;
    do{
        cout << "Informe o nome do produto: ";
        getline(cin,produto);
        cout << "Informe a quantidade: ";
        cin >> temp.quantidade;
        cout << "Informe o preço: ";
        cin >> temp.preco;
        lista[produto] = temp;
        cout << "Deseja continuar?";
        cin >> resp;
        cin.ignore();
    }while(resp == "sim");

    for(auto elemento : lista){
        cout << elemento.first << " - ";
        cout << elemento.second.quantidade;
        cout << " - R$ " << elemento.second.preco << endl;
        total += elemento.second.quantidade * elemento.second.preco;
    }

    cout << "Total da lista R$ " << total << endl;

    return 0;
}



