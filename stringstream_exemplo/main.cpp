#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    string linha;

    getline(cin,linha);
    stringstream dados(linha);
    string parte;
    while(dados >> parte){
        cout << parte << endl;
    }
    return 0;
}
