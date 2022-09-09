#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x = 0;
    float resultado = 0;
    float absoluto = 0;
    cout << "Informe o valor de x :";
    cin >> x;
    absoluto = abs(x);
    resultado = sqrt(absoluto);
    cout << "A raiz quadrada de " << x << " é " << resultado << endl;
    return 0;
}
