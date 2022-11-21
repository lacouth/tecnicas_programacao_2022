#include <iostream>
#include <fstream>
#include <vector>
using namespace std;


float media(vector<int> dados){
    float media = 0;
    for(auto temp : dados){
        media += temp;
    }
    return media / dados.size();
}

int main()
{
    ifstream arquivo;
    vector<int> temperaturas;
    vector<int> umidades;
    int temp;
    int umid;
    char v;
    string cabecalho;

    arquivo.open("/home/lacouth/codes/sensor.txt");


    if(arquivo.is_open() == true){
        getline(arquivo,cabecalho);
        while(arquivo >> temp){
            arquivo >> v;
            arquivo >> umid;
            temperaturas.push_back(temp);
            umidades.push_back(umid);
        }

        cout << "Cabeçalho do arquivo: " << cabecalho << endl;
        cout << "Total de temperaturas: " << temperaturas.size() << endl;
        cout << "Total de umidade: " << umidades.size() << endl;
        cout << "Média das temperaturas: " << media(temperaturas) << endl;
        cout << "Média das umidades: " << media(umidades)<< endl;
    }else{
        cout << "Deu ruim!!\n";
    }
    arquivo.close();

    ofstream arquivo_saida;


    return 0;
}
