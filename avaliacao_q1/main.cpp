#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    int passos = 0;

    cin >> n;

    if(n > 0){
        while(n > 1){
            if(n%2 == 0){
                n /= 2;
            }else{
                n = 3*n + 1;
            }
            passos++;
        }
        cout << passos << endl;
    }else{
        cout << "impossível calcular\n";
    }

    return 0;
}
