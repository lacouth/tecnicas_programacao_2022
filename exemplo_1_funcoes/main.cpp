#include <iostream>

using namespace std;

int retorna_oito(){
    return 8;
}

void boas_vindas(string curso, int ano){
    cout << "Bem Vindos ao Mundo do C++\n";
    cout << "Você está no curso de " << curso << endl;
    cout << "Estamos em " << ano << endl;
}

int main()
{
    string curso;
    cin >> curso;
    boas_vindas(curso,2022);
    return 0;
}
