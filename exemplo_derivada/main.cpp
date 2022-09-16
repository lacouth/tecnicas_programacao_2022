#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float f(float x){
    // Função que calcula y = 4*x^4 + 3*x^3 - 2*x^2 + 1
    return 4*pow(x,4) + 3*pow(x,3) - 2*pow(x,2) + 1;
}

int main()
{
    int a = 2;
    int y = f(a);
    float h = 1;
    float dx = 0;
    cout << fixed << setprecision(7);
    cout << setw(20) << "dx" << setw(20) << "h\n";
    for(int i = 0; i < 20; i++){
        dx = (f(a+h) - f(a)) / h;
        cout << setw(20) << dx << setw(20) << h << endl;
        h /= 2;
    }

    cout << "f("<<a<<")= " << y << endl;
    cout << "dx = " << dx << endl;


    return 0;
}
