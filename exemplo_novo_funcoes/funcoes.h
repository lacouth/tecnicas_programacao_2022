#ifndef FUNCOES_H
#define FUNCOES_H

#include <string>

using namespace std;

string boas_vindas(string nome, string curso){
    string saudacao = "Hello, ";
    saudacao += nome;
    saudacao += "\nBem-Vindo(a) ao curso de " + curso;
    return saudacao;

}

#endif // FUNCOES_H
