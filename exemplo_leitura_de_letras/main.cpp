#include <iostream>
#include <fstream>
#include <map>

using namespace std;

int main()
{
    ifstream arquivo;
    string palavra;
    map<string,int> contador_palavras;
    int contador = 0;
    arquivo.open("/home/lacouth/codes/gal_costa.txt");
    if(arquivo.is_open()){
        while(arquivo >> palavra){
            contador++;
            contador_palavras[palavra]++;
        }
        cout << "O arquivo tem: " << contador << " palavras\n";
        for(auto& [chave,valor] : contador_palavras){
            cout << chave << " : " << valor << endl;
        }
    }else{
        cout << "Deu Ruim!\n";
    }
    return 0;
}
