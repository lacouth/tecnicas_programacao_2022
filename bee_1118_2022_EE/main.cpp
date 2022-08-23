#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float nota_1 = 0;
    float nota_2 = 0;
    float media = 0;
    int continuar = 1;

    cout << fixed << setprecision(2);

    while(continuar == 1){
        while(cin >> nota_1 and (nota_1 < 0 or nota_1 > 10)){
            cout << "nota invalida\n";
        }
        while(cin >> nota_2 and (nota_2 < 0 or nota_2 > 10)){
            cout << "nota invalida\n";
        }
        media = (nota_1 + nota_2) / 2.0;
        cout << "media = " << media << endl;

        do{
            cout << "novo calculo (1-sim 2-nao)\n";
        }while(cin >> continuar and (continuar < 1 or continuar > 2));

    }

    return 0;
}










