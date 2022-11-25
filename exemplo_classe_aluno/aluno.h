#ifndef ALUNO_H
#define ALUNO_H

#include <string>
#include <iostream>

using namespace std;

class Aluno
{
private:
    string nome;
    string sobrenome;
    string matricula;
    float media;
public:
    Aluno();
    ~Aluno();
    Aluno(string nome, string sobrenome,string mat, float media);
    string nome_completo();
    string status();
    float getMedia() const;
    void setMedia(float newMedia);
};

#endif // ALUNO_H
