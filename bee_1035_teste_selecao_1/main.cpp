#include <iostream>

using namespace std;

int main()
{
    int A = 0;
    int B = 0;
    int C = 0;
    int D = 0;

    cin >> A >> B >> C >> D;

    if(B > C and D > A and (C + D) > (A + B) and C > 0 and D > 0 and A % 2 == 0){
        cout << "Valores aceitos" << endl;
    }else{
        cout << "Valores nao aceitos" << endl;
    }
    return 0;
}
