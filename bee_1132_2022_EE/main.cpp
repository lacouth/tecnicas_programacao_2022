#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int inicio = 0;
    int fim = 0;
    long int soma = 0;

    cin >> inicio >> fim;

    if(inicio > fim){
        swap(inicio,fim);
    }


    for(int i = inicio; i <= fim; i++){
        if( i % 13 != 0){
            soma += i;
        }
    }
    cout << soma << endl;
    return 0;
}
