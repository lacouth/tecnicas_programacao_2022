#include "aluno.h"

float Aluno::getMedia() const
{
    return media;
}

void Aluno::setMedia(float newMedia)
{
    if(newMedia >=0 and newMedia <=100){
        this->media = newMedia;
    }else{
        this->media = 0;
    }
}

Aluno::Aluno()
{

}

Aluno::~Aluno(){
    cout << "O aluno " << this->nome << " foi apagado\n";
}

Aluno::Aluno(string nome, string sobrenome, string mat,float media){
    this->nome = nome;
    this->sobrenome = sobrenome;
    this->matricula = mat;
    this->media = media;
}

string Aluno::nome_completo(){
    return this->nome + " " + this->sobrenome;
}

string Aluno::status()
{

    return this->media >= 70 ? "Aprovado" : "Reprovado";

}


