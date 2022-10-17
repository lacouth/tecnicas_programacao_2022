#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<string,string> numeros;
    string palavra;
    numeros["one"] = "um";
    numeros["two"] = "dois";
    numeros["three"] = "três";
    numeros["four"] = "quatro";

    cout << "Digite uma palavra: ";
    cin >> palavra;
    cout << "A tradução é: "<< numeros[palavra] << endl;

    for( auto elemento : numeros ){
        cout << elemento.first << " : " << elemento.second << endl;
    }



    return 0;
}
