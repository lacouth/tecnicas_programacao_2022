#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float n1,n2, n3, n4;
    float media = 0;
    cin >> n1 >> n2 >> n3 >> n4;
    media = (n1*2 + n2*3 + n3*4 +n4) / 10.0;

    cout << fixed << setprecision(1);

    cout << "Media: " << media << endl;

    if(media >= 7.0){
        cout << "Aluno aprovado.\n";
    }else if(media >= 5.0){
        float exame_final = 0;
        float media_final = 0;
        cout << "Aluno em exame.\n";
        cin >> exame_final;
        cout << "Nota do exame: " << exame_final << endl;
        media_final = (media + exame_final) / 2.0;
        if(media_final >= 5.0){
            cout << "Aluno aprovado.\n";
        }else{
            cout << "Aluno reprovado.\n";
        }
        cout << "Media final: " << media_final << endl;
    }else{
        cout << "Aluno reprovado.\n";
    }
}
