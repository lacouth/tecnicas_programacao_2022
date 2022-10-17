#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    map<char,int> contadores;
    string frase;
    cout << "Informe a sua frase: ";
    getline(cin,frase);


    for(auto letra : frase){
        contadores[letra]++;
    }

    for(auto elemento : contadores){
        cout << elemento.first << " - " << elemento.second << endl;
    }



    return 0;
}
